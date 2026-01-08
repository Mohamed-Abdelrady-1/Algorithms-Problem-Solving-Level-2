# include <iostream>
# include <string>
# include "MyLib.h" // Project-specific Library
using namespace std;

void Add_Array_Elements(int Number, int Arr[100], int& Arr_Length)
{
	Arr[Arr_Length] = Number;
	Arr_Length++;
}

void Input_User_Numbers(int Arr[100],int &Arr_Length)
{
	bool Add_More = true;

	do
	{
		int Number = MyLib::Read_Positive_Number("Please Enter a Number: ");

		Add_Array_Elements(Number, Arr, Arr_Length);

		cout << "Do you want to add more numbers? [0]No, [1]Yes?\n";
		cin >> Add_More;
		
	} while (Add_More);
}

void Print_Array(int Arr[100], int Arr_Length)
{
	for (int i = 0; i < Arr_Length; i++)
	{
		cout << Arr[i] << " ";
	}
}

int main()
{
	int Arr[100], Arr_Length{};

	Input_User_Numbers(Arr, Arr_Length);

	MyLib::Clear_Screen();

	cout << "Array Length: " << Arr_Length << endl;
	cout << "Array Elements: ";

	Print_Array(Arr,Arr_Length);

	return 0;
}