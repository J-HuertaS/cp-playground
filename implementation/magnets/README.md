# Magnets

**Platform:** Codeforces

**Problem:** A. Magnets

**Link:** https://codeforces.com/problemset/problem/344/A

**Difficulty:** 800

**Tags:** implementation

**Date Solved:** 2026-03-10

---

## Problem Summary

Mike arranges rectangular magnets in a row. Each magnet has two poles:

* `"01"` — plus-minus orientation
* `"10"` — minus-plus orientation

Magnets are placed one after another in a row.

If two adjacent magnets have **compatible poles**, they attract and form part of the same group.
If their poles repel, Mike places the new magnet slightly apart, creating a **new group**.

The task is to determine how many **groups of magnets** are formed.

---

## Input

The first line contains an integer:

* `n` — the number of magnets.

The following `n` lines each contain a string representing the orientation of a magnet:

* `"01"`
* `"10"`

Constraints:

* `1 ≤ n ≤ 100000`

---

## Output

Print a single integer — the **number of groups of magnets** formed.

---

## Explanation of the Solution

### Key Observation

A new group starts whenever the **orientation of the magnet changes** compared to the previous one.

For example:

```
10
10
10
01
10
10
```

Groups form whenever the value changes:

```
10 10 10 | 01 | 10 10
```

This produces:

```
3 groups
```

Therefore, the problem reduces to **counting how many times consecutive magnets have different orientations**.

---

### Approach

1. Read the number of magnets `n`.
2. Read the orientation of the first magnet and store it as a reference.
3. Initialize the number of groups as `1`.
4. For each of the remaining magnets:

   * Read the orientation.
   * If it differs from the previous magnet, increment the group counter.
   * Update the reference.
5. Print the number of groups.

---

### Complexity

**Time Complexity:** `O(n)`
We process each magnet exactly once.

**Space Complexity:** `O(1)`
Only a few variables are used.

---

## Implementation

Can be found in the `solution.cpp` file.
