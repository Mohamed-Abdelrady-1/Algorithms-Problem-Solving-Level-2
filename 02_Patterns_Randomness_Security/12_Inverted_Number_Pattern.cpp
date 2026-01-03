# include <iostream>
# include <string>
# include "MyLib.h" // Project-specific Library
using namespace std;

void Print_Inverted_Pattern(int Number)
{
	MyLib::Clear_Screen();

	cout << "Inverted Pattern From " << Number << " To " << 1 << endl;
	for (int i = Number; i >= 1; i--)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << i;
		}
		cout << "\n";
	}
}

int main()
{
	int Number = MyLib::Read_Positive_Number("Please enter a Number:");
	Print_Inverted_Pattern(Number);
	return 0;
}