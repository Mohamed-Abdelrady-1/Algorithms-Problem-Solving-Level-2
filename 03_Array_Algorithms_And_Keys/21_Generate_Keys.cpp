# include <iostream>
# include <string>
# include <ctime>
# include "MyLib.h" // Project-specific Library
using namespace std;

string Generate_Word(MyLib::enCharType Char_Type, short SegmentLength)
{
	string Word = "";

	for (int i = 1; i <= SegmentLength; i++)
	{
		Word += MyLib::Get_Random_Character(Char_Type);
	}

	return Word;
}

string Generate_Key(short Length,short SegmentLength)
{
	string Key = "";

	for (int i = 1; i <= Length; i++)
	{
		Key += Generate_Word(MyLib::enCharType::Capital, SegmentLength);
		if (i != Length)
		{
			Key += '-';
		}
	}

	return Key;
}

void Generate_Keys(int Number_Of_Key, short Number_Of_Segments, short SegmentLength)
{
	MyLib::Clear_Screen();
	
	for (int i = 1; i <= Number_Of_Key; i++)
	{
		cout << "Key [" << i << "] : " << Generate_Key(Number_Of_Segments, SegmentLength) << endl;
	}
}

int main()
{
	srand((unsigned)time(NULL));

	int Number_Of_Key = MyLib::Read_Positive_Number("Please enter how many Keys to generate ?");
	short Number_Of_Segments = MyLib::Read_Positive_Number("Please enter number of segments ?");
	short SegmentLength = MyLib::Read_Positive_Number("Please enter number of segment length ?");

	Generate_Keys(Number_Of_Key, Number_Of_Segments, SegmentLength);
	return 0;
}