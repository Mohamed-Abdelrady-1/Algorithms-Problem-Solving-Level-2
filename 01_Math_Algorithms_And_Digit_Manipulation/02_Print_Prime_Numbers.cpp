# include <iostream>
# include <string>
# include "MyLib.h" // Project-specific Library
using namespace std;
using namespace MyLib;

void Print_Primes_Number_From_1_To_N(int Number)
{
	cout << "Prime Number from 1 to " + to_string(Number) + " are:" << endl;

	for (int Counter = 1; Counter <= Number; Counter++)
	{
		if (Is_Prime_Number(Counter))
			cout << Counter << endl;
	}
}

int main()
{
	int Number = Read_Positive_Number("Please enter a Number:");

	Clear_Screen();
	Print_Primes_Number_From_1_To_N(Number);

	return 0;
}