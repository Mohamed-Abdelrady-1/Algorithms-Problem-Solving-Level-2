# include <iostream>
# include <string>
# include "MyLib.h" // Project-specific Library
using namespace std;

void Print_Number_Pattern(int Number)
{
	MyLib::Clear_Screen();

	cout << "Number Pattern From " << 1 << " To " << Number << endl;
	for (int i = 1; i <= Number; i++)
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
	Print_Number_Pattern(Number);
	return 0;
}