# Beautiful Matrix

**Platform:** Codeforces  

**Problem:** Beautiful Matrix  

**Link:** https://codeforces.com/problemset/problem/263/A  

**Difficulty:** 800  

**Tags:** implementation  

**Date Solved:** 2026-03-12

---

## Problem Summary

We are given a **5×5 matrix** containing exactly **one cell with value `1`** and all other cells equal to `0`.

In one move we can:

- swap two **adjacent rows**, or
- swap two **adjacent columns**.

A matrix is considered **beautiful** if the `1` is located in the **center cell**, which is position `(3,3)`.

The task is to determine the **minimum number of moves** required to move the `1` to the center.

---

## Input

The input consists of **5 lines**, each containing **5 integers**.

Each integer represents the value of the matrix at that position.

Constraints:

- The matrix contains **exactly one `1`**
- All other values are **0**

---

## Output

Print a single integer:

- the **minimum number of moves** required to place the `1` in the center of the matrix.

---

## Explanation of the Solution

### Key Observation

Each allowed operation effectively moves the `1` **one step closer in either row or column direction**.

Therefore, the minimum number of moves is simply the **Manhattan distance** between the current position of the `1` and the center cell `(3,3)`.

---

### Approach

1. Scan the matrix to find the position of the value `1`.
2. Let `(r, c)` be its row and column.
3. The center of the matrix is `(3,3)`.
4. Compute the Manhattan distance:

   `|r - 3| + |c - 3|`

5. Output the result.

---

### Complexity

**Time Complexity:** O(1)

The matrix size is fixed (5×5).

**Space Complexity:** O(1)

Only a few variables are used.

---

## Implementation

Can be found in the `solution.cpp` file.