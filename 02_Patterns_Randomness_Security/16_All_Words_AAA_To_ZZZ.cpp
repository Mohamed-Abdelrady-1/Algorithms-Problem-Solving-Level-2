# include <iostream>
# include <string>
# include "MyLib.h" // Project-specific Library
using namespace std;

void Print_All_Letter_From_AAA_To_ZZZ()
{
	for (int i = 'A'; i <= 'Z'; i++)
	{
		for (int j = 'A'; j <= 'Z'; j++)
		{
			for (int x = 'A'; x <= 'Z'; x++)
			{
				cout << char(i) << char(j) << char(x) << endl;
			}
		}
		cout << "\n";
	}
}
int main()
{
	Print_All_Letter_From_AAA_To_ZZZ();
	return 0;
}