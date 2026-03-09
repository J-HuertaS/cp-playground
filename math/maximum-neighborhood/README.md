# Maximum Neighborhood

**Platform:** Codeforces

**Problem:** A. Maximum Neighborhood

**Link:** https://codeforces.com/problemset/problem/2170/A

**Difficulty:** 800

**Tags:** math, implementation, brute force, bitmasks, greedy

**Date Solved:** 2026-03-09

---

## Problem Summary

We are given an `n × n` grid filled with integers from `1` to `n²` in increasing order from left to right and from top to bottom.

The **cost** of a cell is defined as:

cell value + the sum of all its neighboring cells

Two cells are considered neighbors if they share a side (up, down, left, right).

The goal is to determine the **maximum possible cost among all cells in the grid**.

The challenge is to compute this value efficiently without explicitly constructing the entire grid.

---

## Input

The first line contains an integer `t` — the number of test cases.

For each test case:

* A single integer `n` — the dimension of the grid.

Constraints:

* `1 ≤ t ≤ 100`
* `1 ≤ n ≤ 100`

---

## Output

For each test case, print a single integer representing the **maximum cost among all cells in the grid**.

---

## Explanation of the Solution

### Key Observation

The grid is filled with numbers from `1` to `n²` in increasing order from left to right and from top to bottom.

Therefore, the largest values are located in the **bottom-right corner** of the grid.

Since the cost of a cell includes the value of its neighbors, cells that contain larger numbers are more likely to produce larger costs.

Because of this, the maximum cost must occur **near the bottom-right corner of the grid**.

---

### Approach

Instead of evaluating every cell in the grid, we focus on the **bottom-right 2×2 block**, since it contains the largest values.

```
(n-1,n-1)   (n-1,n)
(n,n-1)     (n,n)
```

However:

* `(n,n)` only has two neighbors, so its cost is relatively small.
* `(n-1,n)` behaves similarly to `(n,n-1)` but produces a slightly smaller result.

This leaves two relevant candidates:

* `(n-1,n-1)`
* `(n,n-1)`

By computing the cost of these two cells and simplifying the expressions, we obtain:

For `(n-1,n-1)`:

```
4n² − n − 4
```

For `(n,n-1)`:

```
5(n² − n − 1)
```

The final answer is simply the maximum of these two expressions.

---

### Complexity

**Time Complexity:** `O(1)` per test case
**Space Complexity:** `O(1)`

---

## Implementation

Can be found in the `solution.cpp` file.
