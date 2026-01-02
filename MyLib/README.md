# MyLib - Custom C++ Utility Library

**MyLib** is a modular, reusable C++ library designed to simplify common programming tasks. It encapsulates logic for input validation, mathematical algorithms, and console management into a clean namespace.

## Features

### 1. Input Validation Utils
* **`Read_Positive_Number(string Message)`**: Prompts the user continuously until a valid positive number is entered.

### 2. Math Algorithms
Optimized mathematical functions relying on pure arithmetic operations (no string conversions):
* **`Is_Prime_Number(int Number)`**: Checks if a number is prime (O(sqrt(N)) optimization).
* **`Is_Perfect_Number(int Number)`**: Checks if a number is perfect.
* **`Reverse_Number(int Number)`**: Reverses an integer mathematically.
* **`Sum_Of_Digits(int Number)`**: Calculates the sum of digits.
* **`Count_Digit_Frequency(int Number, int Target_Digit)`**: Counts occurrences of a specific digit.

### 3. Console Screen Utils
* **`Clear_Screen()`**: Clears the console output (Cross-platform compatible logic).

## How to Use

1. Copy the `MyLib` folder to your project directory.
2. Include the header file in your code:
   ```cpp
   #include "MyLib.h"
   using namespace MyLib;
3. Call any function directly:
   ```cpp
int x = Read_Positive_Number("Enter Number:");
if (Is_Prime_Number(x)) {
    cout << "It's Prime!";
}
