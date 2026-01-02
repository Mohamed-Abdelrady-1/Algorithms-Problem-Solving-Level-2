# include <iostream>
# include <string>
# include "MyLib.h" // Project-specific Library
using namespace std;
using namespace MyLib;

bool Is_Perfect_Number(int Number)
{
	int Sum{};

	for (int i = 1; i <= Number / 2; i++)
	{
		if (Number % i == 0)
			Sum += i;
	}
	
	return (Number == Sum);
}

void Print_Result(int Number)
{
	Clear_Screen();

	if (Is_Perfect_Number(Number))
		cout << Number << " is perfect." << endl;
	else
		cout << Number << " is not perfect." << endl;
}

int main()
{
	int Number = Read_Positive_Number("Please enter a Number:");
	Print_Result(Number);

	return 0;
}