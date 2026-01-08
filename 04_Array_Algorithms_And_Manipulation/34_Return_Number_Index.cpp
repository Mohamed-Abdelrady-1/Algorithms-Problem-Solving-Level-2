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

int Find_Number_Position(int Arr[100], int Arr_Length,int Number_Check)
{
	for (int i = 0; i < Arr_Length; i++)
	{
		if (Number_Check == Arr[i])
		{
			return i;
		}
	}
	return -1;
}

void Print_Array(int Arr[100],int Arr_Length)
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
	int  Arr_Length{}, Number_Check;
	short Index;

	Arr_Length = MyLib::Read_Positive_Number("Please Enter Number of Keys:");
	Fill_Array_With_Random_Number(Arr, Arr_Length);

	MyLib::Clear_Screen();

	cout << "Array 1 Elements:\n";
	Print_Array(Arr, Arr_Length);

	Number_Check = MyLib::Read_Positive_Number("Please Enter a Number To Search For ?");

	Index = Find_Number_Position(Arr, Arr_Length, Number_Check);

	if (Index == -1)
	{
		cout << "The Number is Not Found:-(" << endl;
	}
	else
	{
		cout << "\nNumber you are looking for is: " << Number_Check << endl;
		cout << "The Number Found at Position: " << Index << endl;
		cout << "The Number Found its Order: " << Index + 1 << endl;
	}

	return 0;
}