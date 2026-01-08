# include <iostream>
# include <string>
# include <ctime>
# include "MyLib.h" // Project-specific Library
using namespace std;

void Swap(int& A, int& B)
{
	int Temp = A;
	A = B;
	B = Temp;
}

void Fill_Array_With_1_To_N(int Arr[100], int Arr_Length)
{
	for (int i = 0; i < Arr_Length; i++)
	{
		Arr[i] = i + 1;
	}
}

void Shuffle_Array(int Arr[100], int Arr_Length)
{
	const int From = 0;
	const int To = Arr_Length - 1;
	int Random_Index{};

	for (int i = 0; i < Arr_Length; i++)
	{
		Random_Index = MyLib::Random_Number(From, To);

		Swap(Arr[i], Arr[Random_Index]);
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

	int Arr[100];
	int Arr_Length = MyLib::Read_Positive_Number("Enter Number Of Elements: ");

	MyLib::Clear_Screen();

	Fill_Array_With_1_To_N(Arr, Arr_Length);
	cout << "Array Elements Before Shuffle:\n";
	Print_Array(Arr, Arr_Length);

	Shuffle_Array(Arr, Arr_Length);
	cout << "\nArray Elements After Shuffle:\n";
	Print_Array(Arr, Arr_Length);

	return 0;    
}