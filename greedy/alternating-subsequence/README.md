# Alternating Subsequence

**Platform:** Codeforces  

**Problem:** Alternating Subsequence  

**Link:** https://codeforces.com/problemset/problem/1343/C  

**Difficulty:** 1200  

**Tags:** dp, greedy, two pointers  

**Date Solved:** 2026-03-23

---

## Problem Summary

We are given an array containing positive and negative numbers.

We must build a subsequence such that:

- signs alternate (positive → negative → positive → ...)
- the subsequence has **maximum possible length**
- among all such subsequences, we maximize the **sum**

---

## Input

- `t` — number of test cases  
- for each test case:
  - `n` — number of elements  
  - array `a`  

Constraints:

- total n ≤ 2⋅10^5  
- ai ≠ 0  

---

## Output

For each test case, print the maximum possible sum.

---

## Explanation of the Solution

### Key Observation

To maximize the length of the alternating subsequence:

- we must pick **exactly one element from each segment of same sign**

To maximize the sum:

- from each segment, we pick the **maximum element**

---

### Approach

1. Traverse the array.
2. Group consecutive elements with the same sign.
3. For each group:
   - keep track of the maximum value
4. Add that maximum to the result.
5. Continue until the end.

---

### Complexity

**Time Complexity:** O(n) per test case  

**Space Complexity:** O(1)

---

## Implementation

Can be found in the `solution.cpp` file.