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

void Copy_Only_Prime_Numbers(int Arr_Source[100],int Arr_Destination[100],int Arr_Length,int& Arr2_Length)
{
	for (int i = 0; i < Arr_Length; i++)
	{
		if (MyLib::Is_Prime_Number(Arr_Source[i]))
		{
			Arr_Destination[Arr2_Length] = Arr_Source[i];
			Arr2_Length++;
		}
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

	int Arr_1[100], Arr_Length{};
	int Arr_2[100], Arr2_Length{};

	Arr_Length = MyLib::Read_Positive_Number("How Many Elements ?");
	Fill_Array_With_Random_Numbers(Arr_1, Arr_Length);
	Copy_Only_Prime_Numbers(Arr_1, Arr_2, Arr_Length, Arr2_Length);

	MyLib::Clear_Screen();

	cout << "Array Elements: \n";
	Print_Array(Arr_1, Arr_Length);
	cout << "\nPrime Number in Array2: \n";
	Print_Array(Arr_2, Arr2_Length);

	return 0;
}