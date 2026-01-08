# include <iostream>
# include <string>
# include <ctime>
# include "MyLib.h" // Project-specific Library
using namespace std;

void Add_Array_Elements(int Number, int Arr[100], int &Arr_Length)
{
	Arr[Arr_Length] = Number;
	Arr_Length++;
}

void Full_Array_With_Random_Number(int Arr[100],int  Arr_Length)
{
	const short From = 1;
	const short To = 100;

	for (int i = 0; i < Arr_Length; i++)
	{
		Arr[i] = MyLib::Random_Number(From, To);
	}
}

void Copy_Array_Using_Add_Entry(int Arr_Source[100], int Arr_Dest[100], int Source_Length,int& Dest_Length)
{
	for (int i = 0; i < Source_Length; i++)
	{
		Add_Array_Elements(Arr_Source[i], Arr_Dest, Dest_Length);
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
	srand((unsigned)time(NULL));

	int Arr_1[100], Arr1_Length{};
	int Arr_2[100], Arr2_Length{};

	int Length = MyLib::Read_Positive_Number("How many elements?");
	Arr1_Length = Length;

	Full_Array_With_Random_Number(Arr_1, Length);
	Copy_Array_Using_Add_Entry(Arr_1, Arr_2, Arr1_Length, Arr2_Length);

	MyLib::Clear_Screen();

	cout << "Array 1 Elements: ";
	Print_Array(Arr_1, Arr1_Length);

	cout << "\nArray 2 Elements After Copy: ";
	Print_Array(Arr_2, Arr2_Length);

	return 0;
}