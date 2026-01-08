# include <iostream>
# include <string>
# include <ctime>
# include "MyLib.h" // Project-specific Library
using namespace std;

void Generate_Keys_In_Array(string Arr[100], int Arr_Length,short Number_Of_Segments,short Segment_Length)
{
	for (int i = 0; i < Arr_Length; i++)
	{
		Arr[i] = MyLib::Generate_Key(Number_Of_Segments, Segment_Length);
	}
}

void Print_Array(string Arr[100],int Arr_Length)
{
	MyLib::Clear_Screen();

	cout << "Array Elements:\n";
	for (int i = 0; i < Arr_Length; i++)
	{
		cout << "Array [" << i << "] : " << Arr[i] << endl;
	}
	cout << "\n";
}

int main()
{
	srand((unsigned)time(NULL));

	string Arr[100];
	int  Arr_Length{};
	const short Number_Of_Segments = 4;
	const short Segment_Length = 4;


	Arr_Length = MyLib::Read_Positive_Number("Please Enter Number of Keys:");
	Generate_Keys_In_Array(Arr, Arr_Length, Number_Of_Segments, Segment_Length);

	Print_Array(Arr, Arr_Length);
	return 0;
}