# Bit++

**Platform:** Codeforces

**Problem:** A. Bit++

**Link:** https://codeforces.com/problemset/problem/282/A

**Difficulty:** 800

**Tags:** implementation

**Date Solved:** 2026-03-10

---

## Problem Summary

The programming language **Bit++** has only one variable: `x`.

There are two possible operations:

* `++` increases the value of `x` by `1`
* `--` decreases the value of `x` by `1`

A program consists of `n` statements. Each statement contains exactly one of these operations and the variable `X`. The operation and the variable may appear in any order, for example:

```
++X
X++
--X
X--
```

The initial value of `x` is `0`.
The task is to execute all the statements and determine the **final value of `x`**.

---

## Input

The first line contains:

* `n` — the number of statements in the program.

The following `n` lines each contain one statement.

Constraints:

* `1 ≤ n ≤ 150`

Each statement contains exactly one operation (`++` or `--`) and the variable `X`.

---

## Output

Print a single integer representing the **final value of `x`** after executing all the statements.

---

## Explanation of the Solution

### Key Observation

Each statement modifies the variable `x` by either:

```
+1
```

or

```
-1
```

The position of the variable `X` does not matter, since the operation always indicates whether the value should increase or decrease.

Therefore, we only need to detect whether the statement contains `+` or `-`.

---

### Approach

1. Initialize a variable `x = 0`.
2. Read the number of statements `n`.
3. For each statement:

   * If the string contains `'+'`, increment `x`.
   * Otherwise, decrement `x`.
4. After processing all statements, print the final value of `x`.

---

### Complexity

**Time Complexity:** `O(n)`
We process each statement once.

**Space Complexity:** `O(1)`
Only a few variables are used.

---

## Implementation

Can be found in the `solution.cpp` file.
