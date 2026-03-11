# Nearly Lucky Number

**Platform:** Codeforces

**Problem:** A. Nearly Lucky Number

**Link:** https://codeforces.com/problemset/problem/110/A

**Difficulty:** 800

**Tags:** implementation

**Date Solved:** 2026-03-10

---

## Problem Summary

A **lucky number** is a number whose decimal representation contains only the digits:

```id="i4lqit"
4 and 7
```

Examples of lucky numbers:

```id="axr4lr"
4
7
47
744
```

A number is called **nearly lucky** if the **count of lucky digits (4 and 7) in the number is itself a lucky number**.

The task is to determine whether the given number `n` is **nearly lucky**.

---

## Input

The input consists of a single integer:

* `n` — the number to check.

Constraints:

* `1 ≤ n ≤ 10¹⁸`

Because the number can be large, it is convenient to read it as a **string**.

---

## Output

Print:

```id="qjltqy"
YES
```

if the number is **nearly lucky**, otherwise print:

```id="blp8yu"
NO
```

---

## Explanation of the Solution

### Key Observation

We only need to know:

1. How many digits in the number are **4 or 7**.
2. Whether this count itself is a **lucky number**.

Since `n ≤ 10¹⁸`, the number can have at most **18 digits**, so counting lucky digits is very fast.

---

### Approach

1. Read the number as a **string**.
2. Count how many characters are `'4'` or `'7'`.
3. Convert this count into a string.
4. Check whether this count contains **only lucky digits** (`4` or `7`).
5. If so, print `"YES"`, otherwise print `"NO"`.

---

### Complexity

**Time Complexity:** `O(d)`
Where `d` is the number of digits in `n` (at most 18).

**Space Complexity:** `O(1)`

---

## Implementation

Can be found in the `solution.cpp` file.
