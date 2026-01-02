# include <iostream>
# include <string>
# include "MyLib.h" // Project-specific Library
using namespace std;
using namespace MyLib;

int Reverse_Number(int Number)
{
	int Reverse{};
	int Remainder{};
	while (Number > 0)
	{
		Remainder = Number % 10;
		Number /= 10;

		Reverse = Reverse * 10 + Remainder;
	}
	return Reverse;
}

void Print_Result(int Number)
{
	cout << "Reverse is " << Reverse_Number(Number) << endl;
}

int main()
{
	int Number = Read_Positive_Number("Please enter a Number");
	Print_Result(Number);
}