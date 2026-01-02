# include <iostream>
# include <string>
# include "MyLib.h" // Project-specific Library
using namespace std;
using namespace MyLib;

void Print_Digits(int Number)
{
	int Remainder{};
	while (Number > 0)
	{
		Remainder = Number % 10;
		Number /= 10;
		cout << Remainder << endl;
	}
}

int main()
{
	int Number = Read_Positive_Number("Please enter a Number:");

	Clear_Screen();
	Print_Digits(Number);

	return 0;
}