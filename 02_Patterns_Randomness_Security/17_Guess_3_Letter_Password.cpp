# include <iostream>
# include <string>
# include "MyLib.h" // Project-specific Library
using namespace std;

string Read_Password()
{
	string Password = "";

	cout << "Please enter a 3-Letter Password (all capital)?\n";
	cin >> Password;

	return Password;
}

bool Guess_Password(string Password)
{
	string Guess = "";
	int Counter{};
	for (int i = 'A'; i <= 'Z'; i++)
	{
		for (int j = 'A'; j <= 'Z'; j++)
		{
			for (int k = 'A'; k <= 'Z'; k++)
			{
				Counter++;

				Guess = string() + char(i) + char(j) + char(k);

				cout << "Trial [" << Counter << "] : " << Guess << endl;
				if (Guess == Password)
				{
					cout << "\nPassword is " << Guess << "\n";
					cout << "Found after " << Counter << " Trial(s)\n";
					return true;
				}

				Guess = "";
			}
		}
	}
	return false;
}
int main()
{
	Guess_Password(Read_Password());
	return 0;
}