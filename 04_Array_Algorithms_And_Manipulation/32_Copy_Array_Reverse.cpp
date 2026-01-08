# include <iostream>
# include <string>
# include <ctime>
# include "MyLib.h" // Project-specific Library
using namespace std;

void Fill_Array_With_Random_Number(int Arr[100], int Arr_Length)
{
	const int From = 1;
	const int To = 100;
	for (int i = 0; i < Arr_Length; i++)
	{
		Arr[i] = MyLib::Random_Number(From, To);
	}
}

void Copy_Array_In_Reverse_Order(int Arr_Source[100],int Arr_Destination[100], int Arr_Length)
{
	int Count = Arr_Length - 1;

	for (int i = 0; i < Arr_Length; i++)
	{
		Arr_Destination[Count] = Arr_Source[i];
		Count--;
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

	int Arr_1[100], Arr_2[100];
	int Arr_Length = MyLib::Read_Positive_Number("Enter Number Of Elements: ");

	MyLib::Clear_Screen();

	Fill_Array_With_Random_Number(Arr_1, Arr_Length);
	Copy_Array_In_Reverse_Order(Arr_1, Arr_2, Arr_Length);

	cout << "Array 1 Elements: \n";
	Print_Array(Arr_1, Arr_Length);
	cout << "Array 2 Elements After Copying Array 1 In Reversed Order:\n";
	Print_Array(Arr_2, Arr_Length);
	
	return 0;    
}