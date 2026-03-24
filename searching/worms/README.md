# Worms

**Platform:** Codeforces  

**Problem:** Worms  

**Link:** https://codeforces.com/problemset/problem/474/B  

**Difficulty:** 1200  

**Tags:** binary search, implementation  

**Date Solved:** 2026-03-24

---

## Problem Summary

We are given piles of worms, where each pile contains a number of worms.

Each worm is labeled consecutively across all piles.

Given a worm label `x`, we must determine in which pile it belongs.

---

## Input

- `n` — number of piles  
- array `a` where `a[i]` is the size of pile i  
- `m` — number of queries  
- array `q` of worm labels  

Constraints:

- 1 ≤ n, m ≤ 10^5  
- total worms ≤ 10^6  

---

## Output

For each query, print the pile number containing the worm.

---

## Explanation of the Solution

### Key Observation

Each pile corresponds to a **range of labels**.

We can transform the array into prefix sums:

```
prefix[i] = total worms up to pile i
```

Now each query asks:

```
find the first index i such that prefix[i] ≥ x
```

---

### Approach

1. Build prefix sum array.
2. For each query:
   - use binary search to find the first position where `prefix[i] ≥ x`
3. Output `i + 1` (1-based index)

---

### Complexity

**Time Complexity:**  
- Preprocessing: O(n)  
- Each query: O(log n)  

**Space Complexity:** O(n)

---

## Implementation

Can be found in the `solution.cpp` file.