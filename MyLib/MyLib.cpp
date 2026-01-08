# include "MyLib.h"
# include <iostream>
# include <cstdlib>


using namespace std;

namespace MyLib
{
    // =============================================================
    //                    Console_Screen_Utils
    // =============================================================
    #pragma region Console_Screen_Utils

    // Function to clear the console screen using ANSI escape codes.
    // Works on most modern terminals.
    void Clear_Screen()
    {
        cout << "\033[2J\033[1;1H";
    }

    #pragma endregion

    // =============================================================
    //                    Input_Validation_Utils
    // =============================================================
    #pragma region Input_Validation_Utils

    // Asks the user for a number and ensures it is positive (> 0).
    // Loops indefinitely until valid input is received.
    double Read_Positive_Number(string Message)
    {
        double Value{};
        bool FirstRun = true;

        do
        {
            if (!FirstRun)
            {
                Clear_Screen();
                cout << "Wrong Input! Enter Number > 0\n";
            }

            cout << Message << endl;
            cin >> Value;
            FirstRun = false;

        } while (Value <= 0);

        return Value;
    }

    #pragma endregion

    // =============================================================
    //                        Math_Algorithms
    // =============================================================
    #pragma region Math_Algorithms

    // Checks if a number is Prime (divisible only by 1 and itself).
    // Optimization: Checks divisors up to sqrt(Number) instead of Number.
    // Logic: If a number has a factor > sqrt(N), the pair factor must be < sqrt(N).
    bool Is_Prime_Number(int Number)
    {
        if (Number <= 1)
            return false;

        // Optimization: Counter <= Number / Counter is equivalent to Counter * Counter <= Number
        for (int Counter = 2; Counter <= Number / Counter; Counter++)
        {
            if (Number % Counter == 0)
                return false;
        }

        return true;
    }

    // Checks if a number is Perfect (Sum of divisors == Number).
    // Optimization: Loops only up to Number / 2 because no divisor can be larger than half the number.
    bool Is_Perfect_Number(int Number)
    {
        if (Number <= 1)
            return false;

        int Sum{};
        for (int i = 1; i <= Number / 2; i++)
        {
            if (Number % i == 0)
                Sum += i;
        }

        return Number == Sum;
    }

    // Calculates the sum of all individual digits in a number.
    // Example: Input 123 -> Output 6 (1+2+3)
    int Sum_Of_Digits(int Number)
    {
        int Remainder{};
        int Sum{};

        while (Number > 0)
        {
            Remainder = Number % 10; // Get last digit
            Number /= 10;            // Remove last digit
            Sum += Remainder;
        }

        return Sum;
    }

    // Counts how many times a specific digit (Target_Digit) appears in a Number.
    int Count_Digit_Frequency(int Number, int Target_Digit)
    {
        int Remainder{}, Frequency{};
        while (Number > 0)
        {
            Remainder = Number % 10;
            Number /= 10;

            if (Remainder == Target_Digit)
            {
                Frequency++;
            }
        }
        return Frequency;
    }

    // Mathematically reverses the order of digits in an integer.
    // Example: Input 123 -> Output 321
    int Reverse_Number(int Number)
    {
        int Reverse{};
        int Remainder{};
        while (Number > 0)
        {
            Remainder = Number % 10;
            Number /= 10;

            // Shift current Reverse to left (multiply by 10) and add new digit
            Reverse = Reverse * 10 + Remainder;
        }
        return Reverse;
    }

    // Checks if a number is a Palindrome (reads the same forwards and backwards).
    // Logic: Compares the original number with its reverse.
    // Example: 121 -> True, 1234 -> False.
    // Dependency: Relies on Reverse_Number() function.
    bool Is_Palindrome_Number(int Number)
    {
        return Number == Reverse_Number(Number);
    }

    // Generates a random number between 'From' and 'To' (Inclusive).
    // Logic: rand() % Range_Length + Start_Point.
    // Note: Don't forget to call srand((unsigned)time(NULL)) in main() once.
    int Random_Number(int From, int To)
    {
        // Example: From=1, To=10
        // rand() % (10 - 1 + 1) + 1  -> rand() % 10 + 1
        return rand() % (To - From + 1) + From;
    }

    #pragma endregion

    // =============================================================
    //                    Character_Utils
    // =============================================================
    #pragma region Character_Utils

    // Generates a random character based on the selected type (Small, Capital, Special, Digit).
    // Logic: Maps the enum type to specific ASCII ranges and returns a random char within that range.
    // Ranges: Small (97-122), Capital (65-90), Special (33-47), Digit (48-57).
    char Get_Random_Character(enCharType Type)
    {
        // Note: We use MyLib::Random_Number to generate a value within the ASCII range.
        switch (Type)
        {
        case enCharType::Small_Letter: return char(MyLib::Random_Number(97, 122));
        case enCharType::Capital:      return char(MyLib::Random_Number(65, 90));
        case enCharType::Special:      return char(MyLib::Random_Number(33, 47));
        case enCharType::Digit:        return char(MyLib::Random_Number(48, 57));
        default: return ' ';
        }
    }

    #pragma endregion

    // =============================================================
    //                      String_Utils
    // =============================================================
    #pragma region String_Utils

    string Generate_Word(MyLib::enCharType Char_Type, short Segment_Length)
    {
        string Word = "";

        for (int i = 1; i <= Segment_Length; i++)
        {
            Word += MyLib::Get_Random_Character(Char_Type);
        }

        return Word;
    }

    string Generate_Key(short Number_Of_Segments, short Segment_Length)
    {
        string Key = "";

        for (int i = 1; i <= Number_Of_Segments; i++)
        {
            Key += Generate_Word(MyLib::enCharType::Capital, Segment_Length);
            if (i != Number_Of_Segments)
            {
                Key += '-';
            }
        }

        return Key;
    }

    #pragma endregion

    // =============================================================
    //                          Array_Utils
    // =============================================================
    #pragma region Array_Utils

    // Returns the index of the number if found, otherwise returns -1
    int Find_Number_Position(int Arr[100], int Arr_Length, int Number_Check)
    {
        for (int i = 0; i < Arr_Length; i++)
        {
            if (Number_Check == Arr[i])
            {
                return i;
            }
        }
        return -1;
    }

    // Returns true if number exists in array, false otherwise
    bool Is_Number_In_Array(int Arr[100], int Arr_Length, int Number_Check)
    {
        return (Find_Number_Position(Arr, Arr_Length, Number_Check) != -1);
    }

    #pragma endregion
}