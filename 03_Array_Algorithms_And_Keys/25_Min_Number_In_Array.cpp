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

int GEt_Min_Number_In_Array(int Arr[100], int Arr_Length)
{
	int Min_Number = Arr[0];

	for (int i = 0; i < Arr_Length; i++)
	{
		if (Arr[i] < Min_Number)
			Min_Number = Arr[i];
	}

	return Min_Number;
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
	int Min_Number = GEt_Min_Number_In_Array(Arr, Arr_Length);

	Print_Array(Arr, Arr_Length);
	cout << "\nMin Number is: " << Min_Number << endl;
	return 0;
}