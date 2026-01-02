# Set 1: Math Algorithms & Digit Manipulation (Problems 1-10)

This folder contains the first set of Level 2 problems. The focus shifts here from basic control structures to **mathematical logic** and **digit manipulation**. These exercises solve problems using pure arithmetic operators (`%`, `/`) without converting numbers to strings.

## Problem List

| # | Problem Name | Description | Key Concepts |
|---|---|---|---|
| 01 | **Multiplication Table** | Prints a formatted 1 to 10 multiplication table with headers. | `Nested Loops`, Formatting `\t` |
| 02 | **Print Prime Numbers** | Prints all prime numbers from 1 to N using a custom check function. | `MyLib`, Prime Logic, Optimization |
| 03 | **Check Perfect Number** | Checks if a number is "Perfect" (equal to the sum of its divisors). | Math Logic, Divisors Sum |
| 04 | **Print Perfect Numbers** | Prints all perfect numbers from 1 to N. | Function Reusability |
| 05 | **Print Digits Reversed** | Prints the digits of a number from right to left (one per line). | Modulo `%`, Integer Division `/` |
| 06 | **Sum of Digits** | Calculates the sum of all individual digits in a number. | Accumulator, `While` Loop |
| 07 | **Reverse Number** | Mathematically reverses an integer and returns the new value. | Math Shifting (`Rev * 10 + Rem`) |
| 08 | **Digit Frequency** | Counts how many times a specific digit appears in a number. | Search Logic |
| 09 | **All Digits Frequency** | Prints a full frequency report for all digits (0-9) in a number. | `For` Loop, Function Reusability |
| 10 | **Print Digits in Order** | Prints digits from left to right by reversing the number first. | Logic Combination |

## Key Features
* **MyLib Integration:** All logical checks (Prime, Perfect) are modularized in `MyLib.h`.
* **Pure Math:** Solved digit problems using only `%` and `/` (No Strings/Arrays).
* **Optimization:** Used efficient loops (e.g., stopping at `N/2` for divisors) to enhance performance.