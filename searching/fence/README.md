# Fence

**Platform:** Codeforces  

**Problem:** Fence  

**Link:** https://codeforces.com/problemset/problem/363/B  

**Difficulty:** 1100  

**Tags:** brute force, dp  

**Date Solved:** 2026-03-19

---

## Problem Summary

We are given a fence with `n` planks, each having a height.

We must choose exactly `k` consecutive planks such that the **sum of their heights is minimized**.

The task is to output the **starting index (1-based)** of such a segment.

If multiple segments have the same minimum sum, any valid one can be returned.

---

## Input

- `n` — number of planks (1 ≤ n ≤ 1.5⋅10^5)  
- `k` — size of the segment  

- `h1, h2, ..., hn` — heights of the planks  
  (1 ≤ hi ≤ 100)

---

## Output

Print a single integer — the **starting position** of the segment of length `k` with the minimum total height.

---

## Explanation of the Solution

### Key Observation

We need to evaluate the sum of all subarrays of size `k`.

A brute-force approach would compute each sum independently:

```
O(n * k)
```

which is too slow.

---

### Approach

We use **prefix sums** to compute each window sum efficiently.

1. Build a prefix sum array:

```
prefix[i] = h[0] + h[1] + ... + h[i]
```

2. For each window `[l, r]` of size `k`:

```
sum = prefix[r] - prefix[l-1]
```

3. Slide the window across the array and track the minimum sum.

4. Return the starting index of the best window.

---

### Complexity

**Time Complexity:** O(n)

Each position is processed once.

**Space Complexity:** O(n)

We store the prefix sum array.

---

## Implementation

Can be found in the `solution.cpp` file.