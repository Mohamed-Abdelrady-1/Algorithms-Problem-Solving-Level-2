# include <iostream>
# include <string>
# include <ctime>
# include "MyLib.h" // Project-specific Library
using namespace std;

enum enCharType { Small_Letter = 1, Capital = 2, Special = 3, Digit = 4 };

char Get_Random_Character(enCharType Type)
{
	switch (Type)
	{
	case enCharType::Small_Letter: return char(MyLib::Random_Number(97, 122));
	case enCharType::Capital: return char(MyLib::Random_Number(65, 90));
	case enCharType::Special: return char(MyLib::Random_Number(33, 47));
	case enCharType::Digit: return char(MyLib::Random_Number(48, 57));
	default: return ' ';
	}
}

void Print_Random_Character()
{
	cout << Get_Random_Character(enCharType::Small_Letter) << endl;
	cout << Get_Random_Character(enCharType::Capital) << endl;
	cout << Get_Random_Character(enCharType::Special) << endl;
	cout << Get_Random_Character(enCharType::Digit) << endl;
}

int main()
{
	srand((unsigned)time(NULL));
	Print_Random_Character();
	return 0;
}