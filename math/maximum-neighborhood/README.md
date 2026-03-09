# Maximum Neighborhood

**Platform:** Codeforces
**Problem:** A. Maximum Neighborhood
**Link:** https://codeforces.com/problemset/problem/2170/A

## Problem Summary

Given an `n × n` grid filled with integers from `1` to `n²` row by row,
the cost of a cell is defined as:

cell value + sum of all neighboring cells (sharing a side).

The goal is to compute the **maximum possible cost** among all cells.

# Explanation of the solution

## Key Observation

The grid is filled with numbers from `1` to `n²` in increasing order from left to right and from top to bottom.
Therefore, the largest values are located in the **bottom-right corner of the grid**.

Since the cost of a cell is defined as:

cell value + sum of its neighboring cells

cells with larger values are more likely to produce larger costs.

Because of this, the maximum cost must occur **near the bottom-right corner**.

## Candidate Cells

Instead of checking the entire grid, we only need to inspect the cells in the **bottom-right 2×2 block**:

```
(n-1,n-1)   (n-1,n)
(n,n-1)     (n,n)
```

However:

* `(n,n)` only has **two neighbors**, so its cost is smaller.
* `(n-1,n)` behaves similarly to `(n,n-1)` but produces a slightly smaller value.

Therefore, the two relevant candidates are:

* `(n-1,n-1)`
* `(n,n-1)`

## Cost Formulas

After computing the cost of these two cells, we obtain:

For `(n-1,n-1)`:

```
4n² − n − 4
```

For `(n,n-1)`:

```
5(n² − n − 1)
```

The answer is simply the maximum between these two expressions.

## Special Cases

Small grids behave slightly differently:

* `n = 1` → only one cell → cost = 1
* `n = 2` → maximum cost = 9

## Final Formula

```
max(4n² − n − 4, 5(n² − n − 1))
```

This allows computing the result in **O(1)** time per test case without constructing the grid.

## Complexity

Time Complexity: `O(1)` per test case
Space Complexity: `O(1)`

