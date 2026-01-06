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

void Sum_Of_2Arrays(int Arr_1[100], int Arr_2[100], int Arr_3[100], int Arr_Length)
{
	for (int i = 0; i < Arr_Length; i++)
	{
		Arr_3[i] = Arr_1[i] + Arr_2[i];
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

	int Arr_1[100], Arr_2[100], Arr_3[100];

	int Arr_Length = MyLib::Read_Positive_Number("How Many Elements ?");

	Fill_Array_With_Random_Numbers(Arr_1, Arr_Length);
	Fill_Array_With_Random_Numbers(Arr_2, Arr_Length);
	Sum_Of_2Arrays(Arr_1, Arr_2, Arr_3, Arr_Length);

	MyLib::Clear_Screen();

	cout << "Array 1 Elements: \n";
	Print_Array(Arr_1, Arr_Length);
	cout << "\nArray 2 Elements: \n";
	Print_Array(Arr_2, Arr_Length);
	cout << "\nSum Of Array 1 And Array 2 Elements: \n";
	Print_Array(Arr_3, Arr_Length);

	return 0;
}