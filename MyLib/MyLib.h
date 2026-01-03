#pragma once
# include <string>

namespace MyLib
{
	// enum & Struct
	#pragma region enum & Struct

	enum enCharType { Small_Letter = 1, Capital = 2, Special = 3, Digit = 4 };

	#pragma endregion

	// Console_Screen_Utils
	#pragma region Console_Screen_Utils

	void Clear_Screen();

	#pragma endregion

	//Input_Validation_Utils
	#pragma region Input_Validation_Utils

	double Read_Positive_Number(std::string Message);

	#pragma endregion

	// Math_Algorithms
	#pragma region Math_Algorithms

	bool Is_Prime_Number(int Number);
	bool Is_Perfect_Number(int Number);
	int Sum_Of_Digits(int Number);
	int Count_Digit_Frequency(int Number, int Target_Digit);
	int Reverse_Number(int Number);
	bool Is_Palindrome_Number(int Number);
	int Random_Number(int From, int To);

	#pragma endregion

	// Character_Utils
	#pragma region Character_Utils

	char Get_Random_Character(enCharType Type);

	#pragma endregion
}