# Hamburgers

**Platform:** Codeforces  

**Problem:** Hamburgers  

**Link:** https://codeforces.com/problemset/problem/371/C  

**Difficulty:** 1600  

**Tags:** binary search, brute force  

**Date Solved:** 2026-03-16

---

## Problem Summary

Polycarpus wants to cook as many hamburgers as possible using a specific recipe.

The recipe is given as a string consisting of:

- `B` — bread  
- `S` — sausage  
- `C` — cheese  

Each letter represents one ingredient needed for a hamburger.

Polycarpus already has some ingredients in his kitchen, but he can also **buy additional ingredients from a shop** using his available money.

Each ingredient has a fixed price, and the shop has an **unlimited supply**.

The task is to determine the **maximum number of hamburgers** Polycarpus can make using his current ingredients and the money he has.

---

## Input

- A string representing the recipe (length ≤ 100) containing characters:
  - `B`
  - `S`
  - `C`

- Three integers:
  - `nb`, `ns`, `nc` — number of bread, sausage, and cheese pieces available

- Three integers:
  - `pb`, `ps`, `pc` — price of bread, sausage, and cheese

- One integer:
  - `r` — amount of money Polycarpus has

Constraints:

- `1 ≤ nb, ns, nc ≤ 100`
- `1 ≤ pb, ps, pc ≤ 100`
- `1 ≤ r ≤ 10^12`

---

## Output

Print a single integer — the **maximum number of hamburgers** Polycarpus can make.

---

## Explanation of the Solution

### Key Observation

Instead of directly constructing hamburgers one by one, we can ask:

> Is it possible to make **x hamburgers**?

If we can check this efficiently, we can apply **binary search on the answer**.

---

### Approach

1. Count how many of each ingredient the recipe requires:
   - `needB`
   - `needS`
   - `needC`

2. Suppose we want to make `x` hamburgers.

3. The required ingredients would be:

```
needB * x
needS * x
needC * x
```

4. If Polycarpus already has some ingredients, only the **missing ones must be purchased**.

```
missing = max(0, required - available)
```

5. Compute the total cost of buying the missing ingredients.

6. If the total cost is **≤ r**, then it is possible to make `x` hamburgers.

7. Use **binary search** to find the largest feasible `x`.

---

### Complexity

**Time Complexity:** O(log answer)

Each binary search step performs a constant-time feasibility check.

**Space Complexity:** O(1)

Only a few variables are used.

---

## Implementation

Can be found in the `solution.cpp` file.