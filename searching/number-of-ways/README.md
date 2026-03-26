# Number of Ways

**Platform:** Codeforces  

**Problem:** Number of Ways  

**Link:** https://codeforces.com/problemset/problem/466/C  

**Difficulty:** 1700  

**Tags:** binary search, brute force, data structures, dp, two pointers  

**Date Solved:** 2026-03-26

---

## Problem Summary

We are given an array and must count the number of ways to split it into three contiguous parts such that all three parts have the same sum.

We need to count valid pairs of indices `(i, j)` that divide the array into:

- prefix [1 ... i-1]
- middle [i ... j]
- suffix [j+1 ... n]

All three parts must have equal sum.

---

## Input

- `n` — number of elements  
- array `a`  

Constraints:

- 1 ≤ n ≤ 5⋅10^5  
- |a[i]| ≤ 10^9  

---

## Output

Print the number of valid ways to split the array.

---

## Explanation of the Solution

### Key Observation

Let total sum be `S`.

To split into three equal parts:

```
each part must sum to S / 3
```

So:

- first cut when prefix sum = S/3  
- second cut when prefix sum = 2S/3  

---

### Approach

1. Compute prefix sums.
2. If total sum is not divisible by 3 → answer is 0.
3. Traverse prefix array:
   - count how many times prefix sum equals `S/3`
   - when prefix sum equals `2S/3`, add the count of previous `S/3`
4. Special case:
   - when `S = 0`, we count how many prefix sums equal 0
   - then choose any 2 valid cut points → combinations

---

### Complexity

**Time Complexity:** O(n)

**Space Complexity:** O(n)

---

## Implementation

Can be found in the `solution.cpp` file.