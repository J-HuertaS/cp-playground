# Soldier and Bananas

**Platform:** Codeforces

**Problem:** A. Soldier and Bananas

**Link:** https://codeforces.com/problemset/problem/546/A

**Difficulty:** 800

**Tags:** math, implementation

**Date Solved:** 2026-03-10

---

## Problem Summary

A soldier wants to buy `w` bananas. The cost of the bananas increases linearly:

* the first banana costs `k`
* the second banana costs `2k`
* the third banana costs `3k`
* ...
* the `i`-th banana costs `i · k`

The soldier initially has `n` dollars.

The goal is to determine **how many dollars the soldier must borrow** in order to buy all `w` bananas.
If the soldier already has enough money, the answer should be `0`.

---

## Input

The input consists of three integers:

* `k` — cost multiplier for the bananas
* `n` — initial amount of money the soldier has
* `w` — number of bananas the soldier wants to buy

Constraints:

* `1 ≤ k ≤ 1000`
* `1 ≤ w ≤ 1000`
* `0 ≤ n ≤ 10⁹`

---

## Output

Print a single integer — the amount of money the soldier must borrow.

If the soldier has enough money to buy all bananas, print `0`.

---

## Explanation of the Solution

### Key Observation

The price of the bananas follows an arithmetic sequence:

```
k, 2k, 3k, ..., wk
```

The total cost is therefore:

```
k + 2k + 3k + ... + wk
```

Factoring out `k` gives:

```
k(1 + 2 + 3 + ... + w)
```

The sum inside the parentheses is a **triangular number**:

```
w(w + 1) / 2
```

So the total cost becomes:

```
k * w(w + 1) / 2
```

---

### Approach

1. Read the integers `k`, `n`, and `w`.
2. Compute the total cost of the bananas using the formula:

```
total = k * w * (w + 1) / 2
```

3. Compute how much additional money is required:

```
borrow = total - n
```

4. If `borrow` is negative, output `0`, since the soldier already has enough money.
5. Otherwise, output `borrow`.

---

### Complexity

**Time Complexity:** `O(1)`
The solution uses a direct mathematical formula.

**Space Complexity:** `O(1)`

---

## Implementation

Can be found in the `solution.cpp` file.
