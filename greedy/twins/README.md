# Twins

**Platform:** Codeforces

**Problem:** A. Twins

**Link:** https://codeforces.com/problemset/problem/160/A

**Difficulty:** 900

**Tags:** greedy, sorting

**Date Solved:** 2026-03-11

---

## Problem Summary

You are given `n` coins with values:

```
a₁, a₂, ..., aₙ
```

Your mother asked you and your twin to split the coins equally.

However, you decide to take some coins for yourself so that the **sum of your coins is strictly greater than the sum of the remaining coins**.

To avoid suspicion, you want to take the **minimum number of coins** that satisfies this condition.

The task is to determine the **minimum number of coins you must take**.

---

## Input

The first line contains:

* `n` — the number of coins.

The second line contains `n` integers:

* `aᵢ` — the value of each coin.

Constraints:

* `1 ≤ n ≤ 100`
* `1 ≤ aᵢ ≤ 100`

---

## Output

Print a single integer — the **minimum number of coins** you must take such that the sum of your coins is **strictly greater** than the sum of the remaining coins.

---

## Explanation of the Solution

### Key Observation

To minimize the number of coins taken while maximizing their total value, we should **always take the largest available coin first**.

This greedy strategy works because taking larger coins increases our sum faster, allowing us to exceed the remaining sum with fewer coins.

---

### Approach

1. Read `n` and the values of the coins.
2. Compute the total sum of all coins.
3. Sort the coins in **descending order** (or use a max-heap).
4. Repeatedly take the largest coin:

   * Add its value to your sum.
   * Subtract it from the remaining total.
   * Increase the coin counter.
5. Stop when your sum becomes **strictly greater** than the remaining sum.
6. Print the number of coins taken.

---

### Complexity

**Time Complexity:** `O(n log n)`
Sorting or using a priority queue requires logarithmic operations.

**Space Complexity:** `O(n)`
The coins must be stored in memory.

---

## Implementation

Can be found in the `solution.cpp` file.
