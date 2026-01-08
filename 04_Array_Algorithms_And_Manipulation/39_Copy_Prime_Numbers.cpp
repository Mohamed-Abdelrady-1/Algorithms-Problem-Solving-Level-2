# include <iostream>
# include <string>
# include <ctime>
# include "MyLib.h" // Project-specific Library
using namespace std;

void Add_Array_Elements(int Number, int Arr[100], int& Arr_Length)
{
	Arr[Arr_Length] = Number;
	Arr_Length++;
}

void Full_Array_With_Random_Number(int Arr[100], int  Arr_Length)
{
	const short From = 1;
	const short To = 100;

	for (int i = 0; i < Arr_Length; i++)
	{
		Arr[i] = MyLib::Random_Number(From, To);
	}
}

void Copy_Prime_Number(int Arr[100], int Arr_Dest[100], int Source_Length, int& Dest_Length)
{
	for (int i = 0; i < Source_Length; i++)
	{
		if (MyLib::Is_Prime_Number(Arr[i]))
		{
			Add_Array_Elements(Arr[i], Arr_Dest, Dest_Length);
		}
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

	int Length = MyLib::Read_Positive_Number("Enter Number Of Elements?");
	Arr1_Length = Length;

	Full_Array_With_Random_Number(Arr_1, Length);
	Copy_Prime_Number(Arr_1, Arr_2, Arr1_Length, Arr2_Length);

	MyLib::Clear_Screen();

	cout << "Array 1 Elements: " << Arr1_Length << endl;
	Print_Array(Arr_1, Arr1_Length);

	cout << "\nArray 2 Prime Number: " << Arr2_Length << endl;
	Print_Array(Arr_2, Arr2_Length);

	return 0;
}