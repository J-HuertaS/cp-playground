# Word Capitalization

**Platform:** Codeforces
**Problem:** A. Word Capitalization
**Link:** https://codeforces.com/problemset/problem/281/A
**Difficulty:** 800
**Tags:** implementation, strings
**Date Solved:** 2026-03-10

---

## Problem Summary

We are given a single word consisting of uppercase and lowercase English letters.

The task is to **capitalize the word**, meaning that the **first letter must be uppercase**, while all other characters remain unchanged.

If the first letter is already uppercase, the word should remain the same.

---

## Input

The input consists of a single line:

* `s` — a non-empty string representing the word.

Constraints:

* `1 ≤ |s| ≤ 10³`
* The string contains only uppercase and lowercase English letters.

---

## Output

Print the given word after applying capitalization.

Only the **first character** should be converted to uppercase.
All other characters must remain unchanged.

---

## Explanation of the Solution

### Key Observation

Capitalizing a word simply requires converting its **first character** to uppercase.

All other characters must remain exactly the same.

In C++, this can be done using the standard library function:

```
toupper()
```

which converts a character to its uppercase equivalent.

---

### Approach

1. Read the input string `s`.
2. Convert the first character `s[0]` to uppercase using `toupper`.
3. Output the modified string.

This works because the problem only requires modifying **one character**.

---

### Complexity

**Time Complexity:** `O(n)`
Printing the string takes linear time relative to its length.

**Space Complexity:** `O(1)`
The transformation is done in place without additional data structures.

---

## Implementation

Can be found in the `solution.cpp` file.
