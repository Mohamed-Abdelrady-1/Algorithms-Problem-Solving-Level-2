# include <iostream>
# include <string>
# include <cstdlib>
# include <ctime>
# include "MyLib.h" // Project-specific Library
using namespace std;

int Random_Number(int From, int To)
{
	return rand() % (To - From + 1) + From;
}

int main()
{
	srand((unsigned)time(NULL));
	int From = 1, To = 10;

	for (int i = 1; i <= 3; i++)
		cout << Random_Number(From, To) << endl;

	return 0;
}