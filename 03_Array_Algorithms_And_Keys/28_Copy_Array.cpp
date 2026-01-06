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

void Copy_Array(int Arr_1[100],int Arr_2[100],int Arr_Length)
{
	for (int i = 0; i < Arr_Length; i++)
	{
		Arr_2[i] = Arr_1[i];
	}
}

void Print_Array(int Arr[100], int Arr_Length)
{
	for (int i = 0; i < Arr_Length; i++)
	{
		cout << Arr[i] << " ";
	}
	cout << "\n";
}

int main()
{
	srand((unsigned)time(NULL));

	int Arr_1[100];
	int Arr_2[100];

	int Arr_Length = MyLib::Read_Positive_Number("How Many Elements ?");
	Fill_Array_With_Random_Numbers(Arr_1, Arr_Length);
	Copy_Array(Arr_1, Arr_2, Arr_Length);

	MyLib::Clear_Screen();

	cout << "Array Elements: \n";
	Print_Array(Arr_1, Arr_Length);
	cout << "\nArray 2 Elements After Copy: \n";
	Print_Array(Arr_2, Arr_Length);

	return 0;
}