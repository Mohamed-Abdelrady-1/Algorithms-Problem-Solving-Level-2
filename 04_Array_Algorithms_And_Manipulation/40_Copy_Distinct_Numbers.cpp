# include <iostream>
# include <string>
# include "MyLib.h" // Project-specific Library
using namespace std;

void Add_Array_Elements(int Number, int Arr[100], int& Arr_Length)
{
	Arr[Arr_Length] = Number;
	Arr_Length++;
}

void Input_User_Numbers(int Arr[100], int& Arr_Length)
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


void Copy_Distinct_Number_To_Array(int Arr[100], int Arr_Dest[100], int Source_Length, int& Dest_Length)
{
	for (int i = 0; i < Source_Length; i++)
	{

		if (MyLib::Is_Number_In_Array(Arr_Dest, Dest_Length, Arr[i]))
		{
			continue;
		}

		Add_Array_Elements(Arr[i], Arr_Dest, Dest_Length);
	}
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
	int Arr_1[100], Arr1_Length{};
	int Arr_2[100], Arr2_Length{};

	Input_User_Numbers(Arr_1, Arr1_Length);
	Copy_Distinct_Number_To_Array(Arr_1, Arr_2, Arr1_Length, Arr2_Length);

	MyLib::Clear_Screen();

	cout << "Array 1 Elements: " << Arr1_Length << endl;
	Print_Array(Arr_1, Arr1_Length);

	cout << "\nArray 2 Distinct Elements: " << Arr2_Length << endl;
	Print_Array(Arr_2, Arr2_Length);

	return 0;
}