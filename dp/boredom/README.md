# Boredom

**Platform:** Codeforces  

**Problem:** Boredom  

**Link:** https://codeforces.com/problemset/problem/455/A  

**Difficulty:** 1500  

**Tags:** dp, greedy  

**Date Solved:** 2026-03-21

---

## Problem Summary

We are given an array of integers. We can choose a number `x` and earn `x * frequency[x]` points.

However, if we choose `x`, we must remove all occurrences of `x-1` and `x+1`.

The goal is to maximize the total points we can obtain.

---

## Input

- `n` — number of elements  
- array `a` of size `n`  
- constraints:
  - 1 ≤ n ≤ 10^5  
  - 1 ≤ ai ≤ 10^5  

---

## Output

Print the maximum number of points we can obtain.

---

## Explanation of the Solution

### Key Observation

Instead of working with the array directly, we count the frequency of each value.

This transforms the problem into deciding for each value `x`:

- take it → gain `x * freq[x]` but skip `x-1`
- skip it → move to `x-1`

This is equivalent to the classic **House Robber** problem.

---

### Approach

1. Build a frequency array `freq[x]`.
2. Define:

```
dp[x] = maximum points considering values up to x
```

3. Transition:

```
dp[x] = max(
    dp[x-1],                    // skip x
    dp[x-2] + x * freq[x]       // take x
)
```

4. Iterate from `1` to `max_value`.

5. Answer is:

```
dp[max_value]
```

---

### Complexity

**Time Complexity:** O(n + max_value)

**Space Complexity:** O(max_value)

---

## Implementation

Can be found in the `solution.cpp` file.