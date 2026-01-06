# include <iostream>
# include <string>
# include <ctime>
# include "MyLib.h" // Project-specific Library
using namespace std;

void Fill_Array_With_Random_Numbers(int Arr[100], int Arr_Length)
{
	const short From = 1;
	const short To = 100;

	for (int i = 0; i < Arr_Length; i++)
	{
		Arr[i] = MyLib::Random_Number(From, To);
	}
}

int GEt_Max_Number_In_Array(int Arr[100], int Arr_Length)
{
	int Max_Number = Arr[0];

	for (int i = 0; i < Arr_Length; i++)
	{
		if (Arr[i] > Max_Number)
			Max_Number = Arr[i];
	}

	return Max_Number;
}

void Print_Array(int Arr[100], int Arr_Length)
{
	MyLib::Clear_Screen();

	cout << "Array Elements: ";
	for (int i = 0; i < Arr_Length; i++)
		cout << Arr[i] << " ";
}

int main()
{
	srand((unsigned)time(NULL));
	int Arr[100];
	int Arr_Length = MyLib::Read_Positive_Number("Please Enter a Number:");
	Fill_Array_With_Random_Numbers(Arr, Arr_Length);
	int Max_Number = GEt_Max_Number_In_Array(Arr, Arr_Length);

	Print_Array(Arr, Arr_Length);
	cout << "\nMax Number is: " << Max_Number << endl;
	return 0;
}