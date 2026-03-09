# Watermelon

**Platform:** Codeforces
**Problem:** A. Watermelon
**Link:** https://codeforces.com/problemset/problem/4/A
**Difficulty:** 800
**Tags:** math, brute force
**Date Solved:** 2026-03-09

---

## Problem Summary

We are given a single integer `n` representing the weight of a watermelon.

The task is to determine whether the watermelon can be split into **two parts with even weights**, such that:

* both parts are **positive**
* both parts are **even numbers**

If it is possible to split the watermelon under these conditions, we print `"YES"`.
Otherwise, we print `"NO"`.

---

## Input

The input consists of a single integer:

* `n` — the weight of the watermelon.

Constraints:

* `1 ≤ n ≤ 100`

---

## Output

Print `"YES"` if the watermelon can be split into two **positive even numbers**.

Otherwise, print `"NO"`.

---

## Explanation of the Solution

### Key Observation

The sum of two even numbers is always **even**.

Therefore, if the watermelon can be split into two even parts, the total weight `n` must also be **even**.

However, both parts must also be **positive**.
The smallest positive even number is `2`.

This means the smallest valid decomposition is:

```
2 + 2 = 4
```

Therefore:

* `n` must be **even**
* `n` must be **greater than 2**

If `n = 2`, the only possible split would be `1 + 1`, which does not satisfy the requirement that both parts must be even.

---

### Approach

1. Read the integer `n`.
2. Check if `n` is **even** using the modulo operator (`n % 2`).
3. Ensure that `n` is **greater than 2**.
4. If both conditions are satisfied, output `"YES"`.
5. Otherwise, output `"NO"`.

Examples:

| n | Possible split | Result |
| - | -------------- | ------ |
| 2 | 1 + 1          | NO     |
| 4 | 2 + 2          | YES    |
| 6 | 2 + 4          | YES    |
| 7 | impossible     | NO     |

---

### Complexity

**Time Complexity:** `O(1)`
Only a constant number of operations are performed.

**Space Complexity:** `O(1)`
No additional memory structures are required.

---

## Implementation

Can be found in the `solution.cpp` file.
