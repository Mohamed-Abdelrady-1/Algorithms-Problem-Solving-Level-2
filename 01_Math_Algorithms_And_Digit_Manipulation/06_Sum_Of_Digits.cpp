# include <iostream>
# include <string>
# include "MyLib.h" // Project-specific Library
using namespace std;
using namespace MyLib;

int Sum_Of_Digits(int Number)
{
	int Remainder{};
	int Sum{};

	while (Number > 0)
	{
		Remainder = Number % 10;
		Number /= 10;
		Sum += Remainder;
	}

	return Sum;
}

void Print_Result(int Number)
{
	Clear_Screen();
	cout << "Sum Of Digits = " << Sum_Of_Digits(Number) << endl;
}

int main()
{
	int Number = Read_Positive_Number("Please enter a Number:");
	Print_Result(Number);

	return 0;
}