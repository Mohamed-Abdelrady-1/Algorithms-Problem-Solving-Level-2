# Set 4: Array Manipulation & Search Algorithms (Problems 31-40)

This folder introduces advanced **Array Manipulation** techniques. The key highlight is simulating **Dynamic Arrays** manually using the `Add_Array_Element` pattern, laying the groundwork for understanding `std::vector`.

## Problem List

| # | Problem Name | Description | Key Concepts |
|---|---|---|---|
| 31 | **Shuffle Ordered Array** | Fills an array (1 to N) and shuffles it randomly. | `Swap`, `Random Indexing`, `Fisher-Yates Logic` |
| 32 | **Copy Array Reverse** | Copies elements from source to destination in reverse order. | `Reverse Indexing`, `Looping` |
| 33 | **Generate Keys Array** | Fills a string array with randomly generated serial keys. | `String Array`, `Key Generation Logic` |
| 34 | **Return Number Index** | Searches for a number and returns its index (Linear Search). | `Linear Search`, `Break Loop` |
| 35 | **Check Number In Array** | Returns `true` if a number exists, reusing the search logic. | `Boolean Logic`, `Function Reuse` |
| 36 | **Add Array Element (Sim)** | Simulates adding items to a dynamic array (user input). | `Dynamic Logic`, `Reference Variables (&)` |
| 37 | **Copy Array Using Add** | Refactors the copy logic to use the `Add_Entry` pattern. | `Code Reusability`, `Modular Design` |
| 38 | **Copy Odd Numbers** | Filters odd numbers into a new array dynamically. | `Filtering`, `Modulo Operator` |
| 39 | **Copy Prime Numbers** | Filters prime numbers into a new array dynamically. | `Prime Check`, `Dynamic Copy` |
| 40 | **Copy Distinct Numbers** | Copies numbers only if they don't already exist in destination. | `Distinct Logic`, `Search & Add Combination` |

## Key Technical Concepts
* **Dynamic Array Simulation:** Manually managing `Array_Length` to simulate `push_back` behavior found in high-level languages.
* **Linear Search:** Implementing standard search algorithms (`O(N)`).
* **Reference Parameters:** Heavily using `int& Length` to modify array sizes across functions.
* **Distinct Filtering:** Combining "Search" and "Add" to prevent duplicates.