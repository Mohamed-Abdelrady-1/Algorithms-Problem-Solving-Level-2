# include <iostream>
# include <string>
# include "MyLib.h" // Project-specific Library
using namespace std;
using namespace MyLib;

int Count_Digit_Frequency(int Number, int TargetDigit)
{
	int Remainder{}, Frequency{};
	while (Number > 0 )
	{

		Remainder = Number % 10;
		Number /= 10;

		if (Remainder == TargetDigit)
		{
			Frequency++;
		}
	}
	return Frequency;
}

void Print_All_Digits_Frequency(int Number)
{
	Clear_Screen();
	for (int i = 0; i < 10; i++)
	{
		short Frequency = Count_Digit_Frequency(Number, i);
		if(Frequency > 0)
			cout << "Digit " << i << " Frequency is " << Frequency << " Time(s)." << endl;
	}
}

int main()
{
	int Number = Read_Positive_Number("Please enter a Number:");
	Print_All_Digits_Frequency(Number);

	return 0;
}