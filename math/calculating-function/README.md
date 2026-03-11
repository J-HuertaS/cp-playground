# Calculating Function

**Platform:** Codeforces 

**Problem:** Calculating Function  

**Link:** https://codeforces.com/problemset/problem/486/A  

**Difficulty:** 800  

**Tags:** implementation, math  

**Date Solved:** 2026-03-11

---

## Problem Summary

We define a function for a positive integer `n`:

f(n) = -1 + 2 - 3 + 4 - 5 + ... + (-1)^n * n

The sequence alternates signs:

- Odd numbers are **subtracted**
- Even numbers are **added**

The task is to compute the value of `f(n)` for a given integer `n`.

Since `n` can be as large as **10¹⁵**, a direct summation is not feasible, so we must derive a mathematical pattern.

---

## Input

The input consists of a single integer:

- **n** — the number of terms in the sequence

Constraints:

- 1 ≤ n ≤ 10¹⁵

---

## Output

Print a single integer:

- The value of the function `f(n)`.

---

## Explanation of the Solution

### Key Observation

The sequence alternates between subtracting odd numbers and adding even numbers:

-1 + 2 - 3 + 4 - 5 + 6 ...

We can group the terms in pairs:

(-1 + 2) + (-3 + 4) + (-5 + 6) + ...

Each pair evaluates to:

1

Therefore:

- If **n is even**, the result is `n / 2`.
- If **n is odd**, the final term is negative, resulting in `-(n + 1) / 2`.

---

### Approach

1. Read the integer `n`.
2. Check whether `n` is even or odd.
3. If `n` is even, return `n / 2`.
4. If `n` is odd, return `-(n + 1) / 2`.

This avoids iterating through the sequence and computes the result in constant time.

---

### Complexity

**Time Complexity:** O(1)

The result is computed using a simple formula.

**Space Complexity:** O(1)

Only a few variables are used.

---

## Implementation

Can be found in the `solution.cpp` file.