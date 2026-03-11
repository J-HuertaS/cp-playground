# Drinks

**Platform:** Codeforces

**Problem:** B. Drinks

**Link:** https://codeforces.com/problemset/problem/200/B

**Difficulty:** 800

**Tags:** math, implementation

**Date Solved:** 2026-03-11

---

## Problem Summary

Vasya has `n` drinks in his fridge. Each drink contains a certain percentage of orange juice.

The percentage of orange juice in the `i`-th drink is `pᵢ`.

Vasya takes **equal amounts of each drink** and mixes them together to make a cocktail.

The task is to determine the **percentage of orange juice in the final mixture**.

---

## Input

The first line contains:

* `n` — the number of drinks.

The second line contains `n` integers:

* `pᵢ` — the percentage of orange juice in each drink.

Constraints:

* `1 ≤ n ≤ 100`
* `0 ≤ pᵢ ≤ 100`

---

## Output

Print the **percentage of orange juice** in the final drink.

The answer will be considered correct if the absolute or relative error does not exceed:

```id="jlvbhq"
10⁻⁴
```

---

## Explanation of the Solution

### Key Observation

Since Vasya takes **equal proportions of each drink**, the final percentage of orange juice is simply the **average of the percentages** of all drinks.

If the percentages are:

```id="ly2wrp"
p₁, p₂, p₃, ..., pₙ
```

then the result is:

```id="4p1m6k"
(p₁ + p₂ + ... + pₙ) / n
```

---

### Approach

1. Read the integer `n`.
2. Read the `n` percentage values.
3. Sum all percentages.
4. Compute the average:

```id="95rdc1"
sum / n
```

5. Print the result as a floating point number.

---

### Complexity

**Time Complexity:** `O(n)`
We process each percentage once.

**Space Complexity:** `O(1)`

---

## Implementation

Can be found in the `solution.cpp` file.
