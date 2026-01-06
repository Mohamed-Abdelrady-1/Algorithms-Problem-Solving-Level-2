# MyLib - Custom C++ Utility Library

**MyLib** is a modular, reusable C++ library designed to simplify common programming tasks. It encapsulates logic for input validation, mathematical algorithms, string manipulation, and console management into a clean namespace.

## Features

### 1. Input Validation Utils

- **`Read_Positive_Number(string Message)`**: Prompts the user continuously until a valid positive number is entered.

### 2. Math Algorithms

Optimized mathematical functions relying on pure arithmetic operations:

- **`Is_Prime_Number(int Number)`**: Checks if a number is prime (O(sqrt(N)) optimization).
- **`Is_Perfect_Number(int Number)`**: Checks if a number is perfect (Sum of divisors == Number).
- **`Reverse_Number(int Number)`**: Reverses an integer mathematically (e.g., 123 -> 321).
- **`Is_Palindrome_Number(int Number)`**: Checks if a number reads the same forwards and backwards.
- **`Sum_Of_Digits(int Number)`**: Calculates the sum of all digits in a number.
- **`Count_Digit_Frequency(int Number, int Target_Digit)`**: Counts occurrences of a specific digit.
- **`Random_Number(int From, int To)`**: Generates a random integer within a specific range.

### 3. Character Utils

- **`Get_Random_Character(enCharType Type)`**: Generates a random character based on type:
  - `Small_Letter` (a-z)
  - `Capital` (A-Z)
  - `Special` (Symbols)
  - `Digit` (0-9)

### 4. String & Key Generation Utils

- **`Generate_Word(enCharType Type, short Length)`**: Generates a random word of specific length and type.
- **`Generate_Key(short Number_Of_Segments, short Segment_Length)`**: Generates a formatted serial key (e.g., `XXXX-XXXX-XXXX`).

### 5. Console Screen Utils

- **`Clear_Screen()`**: Clears the console output (Cross-platform compatible logic).

## How to Use

1. Copy the `MyLib` folder to your project directory.
2. Include the header file in your code:

   ```cpp
   #include "MyLib.h"
   #include <ctime> // Required for srand initialization
   using namespace MyLib;
   int main()
   {
    // Initialize random seed once
    srand((unsigned)time(NULL));

    // Example 1: Math
    int x = Read_Positive_Number("Enter Number:");
    if (Is_Prime_Number(x))
        cout << x << " is Prime!";

    // Example 2: Generate Key
    cout << "\nNew Key: " << Generate_Key(4, 4); // Output: AAAA-BBBB-CCCC-DDDD

    return 0;
   }
   ```
