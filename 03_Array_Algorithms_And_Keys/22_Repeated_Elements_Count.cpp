# include <iostream>
# include <string>
# include "MyLib.h" // Project-specific Library
using namespace std;

void Read_Array_Elements(int Elements[100], short ArrLength)
{
	cout << "Enter Array Elements:" << endl;

	for (int i = 0; i < ArrLength; i++)
	{
		cout << "Element [" << i + 1 << "] : ";
		cin >> Elements[i];
	}
}

short Read_Number_Check()
{
	int Number_Check{};

	cout << "Enter The Number You Want Check:";
	cin >> Number_Check;

	return Number_Check;
}

int Times_Repeated(int Elements[100], short ArrLength, short Number_Check)
{
	int Frequency{};

	for (int i = 0; i < ArrLength; i++)
	{
		if (Elements[i] == Number_Check)
			Frequency++;
	}

	return Frequency;
}

void Print_Result(int Elements[100], short ArrLength,short Number_Check)
{
	MyLib::Clear_Screen();

	int Frequency = Times_Repeated(Elements, ArrLength,Number_Check);

	cout << "Original Array: ";
	for (int i = 0; i < ArrLength; i++)
	{
		cout << Elements[i] << " ";
	}

	cout << "\n";

	cout << Number_Check << " is repeated " << Frequency << " time(s)." << endl;
}

int main()
{
	int Elements[100];
	int ArrLength = MyLib::Read_Positive_Number("Please Number of elements:");

	Read_Array_Elements(Elements, ArrLength);
	short Number_Check = Read_Number_Check();

	Print_Result(Elements, ArrLength,Number_Check);
	return 0;
}

