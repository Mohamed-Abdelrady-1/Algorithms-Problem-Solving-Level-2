# include <iostream>
# include <string>
# include "MyLib.h" // Project-specific Library
using namespace std;

bool Is_Palindrome_Number(int Number)
{
	return Number == MyLib::Reverse_Number(Number);
}

void Print_Result(int Number)
{
	MyLib::Clear_Screen();

	if (Is_Palindrome_Number(Number))
		cout << Number << " Yes, it is a Palindrome Number." << endl;
	else
		cout << Number << " No, it is Not a Palindrome Number." << endl;
}

int main()
{
	int Number = MyLib::Read_Positive_Number("Please enter a Number:");
	Print_Result(Number);
	return 0;
}