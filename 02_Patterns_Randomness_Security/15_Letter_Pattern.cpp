# include <iostream>
# include <string>
# include "MyLib.h" // Project-specific Library
using namespace std;

void Print_Letter_Pattern(int Number)
{
	MyLib::Clear_Screen();

	for (int i = 1; i <= Number; i++)
	{
		int Letter = 65 + i - 1;

		for (int j = 1; j <= i; j++)
		{
			cout << char(Letter);
		}
		cout << "\n";
	}
}

int main()
{
	int Number = MyLib::Read_Positive_Number("Please enter a Number:");

	Print_Letter_Pattern(Number);
	return 0;
}