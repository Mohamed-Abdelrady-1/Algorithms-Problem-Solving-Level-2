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

int Sum_Number_In_Array(int Arr[100], int Arr_Length)
{
	int Sum{};

	for (int i = 0; i < Arr_Length; i++)
	{
			Sum += Arr[i];
	}

	return Sum;
}

float Average_Number_In_Array(int Arr_Length, int Sum_Number)
{
	return (float) Sum_Number / Arr_Length;
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
	int Arr_Length = MyLib::Read_Positive_Number("How Many Elements ?");
	Fill_Array_With_Random_Numbers(Arr, Arr_Length);
	int Sum_Number = Sum_Number_In_Array(Arr, Arr_Length);
	float Average = Average_Number_In_Array(Arr_Length, Sum_Number);

	Print_Array(Arr, Arr_Length);
	cout << "\nAverage of all Number is: " << Average << endl;
	return 0;
}