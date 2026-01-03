# Set 2: Patterns, Randomness & Security (Problems 11-20)

This folder contains the second set of Level 2 problems. It focuses on **Nested Loops** for pattern generation, **Randomness** using C++ libraries, and basic **Security algorithms** like encryption and brute-force guessing.

## Problem List

| # | Problem Name | Description | Key Concepts |
|---|---|---|---|
| 11 | **Palindrome Number** | Checks if a number reads the same forwards and backwards (e.g., 121). | `MyLib::Reverse_Number`, Logic Comparison |
| 12 | **Inverted Number Pattern** | Prints an inverted triangle pattern of numbers. | `Nested For Loops`, Decrement Logic |
| 13 | **Number Pattern** | Prints a standard triangle pattern of numbers repeated on each row. | `Nested For Loops`, Pattern Logic |
| 14 | **Inverted Letter Pattern** | Prints an inverted triangle pattern of characters (A-Z). | `ASCII Mapping`, `Char` Conversion |
| 15 | **Letter Pattern** | Prints a standard triangle pattern of characters increasing row by row. | `Nested Loops`, `Char` Arithmetic |
| 16 | **All Words AAA to ZZZ** | Generates all possible 3-letter combinations from AAA to ZZZ. | `Triple Nested Loops`, Brute Force Logic |
| 17 | **Guess 3-Letter Password** | Guesses a user's password by trying all combinations (Brute Force). | Search Algorithm, Efficiency Check |
| 18 | **Encryption & Decryption** | Encrypts and decrypts text using a simple key-shifting algorithm. | String Manipulation, `ASCII` Shifting |
| 19 | **Random Number Generator** | Generates random numbers within a specific range (From-To). | `rand()`, `srand()`, `time()` |
| 20 | **Random Char Generator** | Generates random characters (Small, Capital, Digit, Special) based on type. | `Enum`, `Switch Case`, ASCII Ranges |

## Key Features
* **Pattern Logic:** Extensive use of nested loops to manipulate visual output.
* **Security Basics:** Introduction to **Brute Force** attacks (trying all keys) and basic **Cipher** encryption.
* [cite_start]**Randomness:** Using `cstdlib` and `ctime` to generate unpredictable values, modularized in `MyLib`[cite: 5, 28].
* [cite_start]**Modular Code:** Functions like `Get_Random_Character` demonstrate clean separation of concerns using Enums[cite: 6].