# Sort the Array

**Platform:** Codeforces  

**Problem:** Sort the Array  

**Link:** https://codeforces.com/problemset/problem/451/B  

**Difficulty:** 1300  

**Tags:** implementation, sortings  

**Date Solved:** 2026-03-22

---

## Problem Summary

We are given an array of distinct integers.

We need to determine whether it is possible to sort the array in increasing order by reversing exactly one segment.

If possible, we must output the indices of that segment.

---

## Input

- `n` — number of elements  
- array `a` of size `n`  

Constraints:

- 1 ≤ n ≤ 10^5  
- elements are distinct  

---

## Output

- print "yes" if possible, otherwise "no"
- if "yes", print indices `l r` of the segment to reverse

---

## Explanation of the Solution

### Key Observation

If the array can be sorted by reversing one segment, then:

- the array must be increasing
- except for one contiguous decreasing segment

---

### Approach

1. Find the first position `l` where the array stops being increasing.
2. Find the last position `r` where the decreasing segment ends.
3. Reverse the segment `[l, r]`.
4. Check if the array is now sorted.

---

### Complexity

**Time Complexity:** O(n)

**Space Complexity:** O(n) (or O(1) if done in-place)

---

## Implementation

Can be found in the `solution.cpp` file.