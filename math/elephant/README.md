# Elephant

**Platform:** Codeforces

**Problem:** A. Elephant

**Link:** https://codeforces.com/problemset/problem/617/A

**Difficulty:** 800

**Tags:** math, greedy

**Date Solved:** 2026-03-10

---

## Problem Summary

An elephant starts at position `0` on a number line and wants to reach position `x`.

In a single step, the elephant can move forward by:

* `1`
* `2`
* `3`
* `4`
* `5`

positions.

The task is to determine the **minimum number of steps required** for the elephant to reach exactly position `x`.

---

## Input

The input consists of a single integer:

* `x` — the coordinate of the friend's house.

Constraints:

* `1 ≤ x ≤ 1,000,000`

---

## Output

Print a single integer representing the **minimum number of steps** needed to move from `0` to `x`.

---

## Explanation of the Solution

### Key Observation

To minimize the number of steps, the elephant should always take the **largest possible step**, which is `5`.

Each step of size `5` covers the maximum distance, reducing the total number of moves required.

Therefore, the problem reduces to determining how many steps of size `5` are needed to reach `x`.

---

### Approach

1. Read the integer `x`.
2. Compute how many full steps of size `5` can be taken:

```id="h2n5v1"
x / 5
```

3. If `x` is divisible by `5`, this is the exact number of steps needed.

4. If there is a remainder (`x % 5 ≠ 0`), one additional step is required to cover the remaining distance.

5. The final result is equivalent to:

```id="s9g3bw"
ceil(x / 5)
```

---

### Complexity

**Time Complexity:** `O(1)`
The solution uses simple arithmetic operations.

**Space Complexity:** `O(1)`

---

## Implementation

Can be found in the `solution.cpp` file.
