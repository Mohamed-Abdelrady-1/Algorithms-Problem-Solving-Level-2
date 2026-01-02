# include <iostream>
# include <string>
# include "MyLib.h" // Project-specific Library
using namespace std;
using namespace MyLib;

int Count_Digit_Frequency(int Number, int TargetDigit)
{
	int Remainder{}, Frequency{};
	while (Number > 0)
	{
		Remainder = Number % 10;
		Number /= 10;

		if (Remainder == TargetDigit)
			Frequency++;
	}
	return Frequency;
}

void Print_Result(int Number, int TargetDigit)
{
	Clear_Screen();
	cout << "Digit " << TargetDigit << " Frequency is " << Count_Digit_Frequency(Number, TargetDigit) << " Time(s)." << endl;
}

int main()
{
	int Number = Read_Positive_Number("Please enter a Number");
	int Target_Number = Read_Positive_Number("Please enter a Target Number:");
	Print_Result(Number, Target_Number);
	return 0;
}