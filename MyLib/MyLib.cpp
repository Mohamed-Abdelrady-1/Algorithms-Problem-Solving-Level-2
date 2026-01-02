#include "MyLib.h"
#include <iostream>

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

    #pragma endregion

}