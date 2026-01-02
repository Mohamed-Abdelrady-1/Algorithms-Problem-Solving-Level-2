# include <iostream>
# include <string>
# include "MyLib.h" // Project-specific Library
using namespace std;
using namespace MyLib;

void Print_Result(int Number)
{
	Clear_Screen();

	cout << "Perfect Numbers from 1 to " << Number << endl;

	for (int i = 1; i <= Number; i++)
	{
		if (Is_Perfect_Number(i))
			cout << i << endl;
	}
}

int main()
{
	int Number = Read_Positive_Number("Please enter a Number:");
	Print_Result(Number);

	return 0;
}