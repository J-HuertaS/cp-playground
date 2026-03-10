# Stones on the Table

**Platform:** Codeforces

**Problem:** A. Stones on the Table

**Link:** https://codeforces.com/problemset/problem/266/A

**Difficulty:** 800

**Tags:** implementation, strings

**Date Solved:** 2026-03-10

---

## Problem Summary

We are given `n` stones placed in a row. Each stone has a color represented by a character:

* `R` — red
* `G` — green
* `B` — blue

The task is to determine the **minimum number of stones that must be removed** so that **no two neighboring stones have the same color**.

Two stones are considered neighbors if they are **adjacent in the row**.

---

## Input

The first line contains an integer:

* `n` — the number of stones.

The second line contains a string `s` of length `n`, representing the colors of the stones.

Constraints:

* `1 ≤ n ≤ 50`
* `s[i] ∈ {R, G, B}`

---

## Output

Print a single integer representing the **minimum number of stones that must be removed** so that no two adjacent stones share the same color.

---

## Explanation of the Solution

### Key Observation

If two neighboring stones have the **same color**, one of them must be removed.

Therefore, every time two **consecutive characters in the string are equal**, we must remove one stone.

For example:

```
RRG
```

The first two stones are the same:

```
R R
```

So we must remove **one** of them.

---

### Approach

1. Read the number of stones `n` and the string `s`.
2. Handle the base case where `n = 1`.
   In this situation there are no neighbors, so the answer is `0`.
3. Iterate through the string from index `0` to `n-2`.
4. Compare each stone with the next one:

   * If `s[i] == s[i+1]`, increment a counter.
5. Print the counter.

Each match between consecutive characters corresponds to **one stone that must be removed**.

---

### Complexity

**Time Complexity:** `O(n)`
We perform a single pass through the string.

**Space Complexity:** `O(1)`
Only a few variables are used.

---

## Implementation

Can be found in the `solution.cpp` file.
