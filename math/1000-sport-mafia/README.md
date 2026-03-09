# Sport Mafia

**Platform:** Codeforces
**Problem:** B. Sport Mafia
**Link:** https://codeforces.com/problemset/problem/1195/B

---

## Problem Summary

Alya performs `n` actions while preparing candies for a game prize.

The first action is always to **put one candy into the box**.

For each of the remaining actions, she can choose between two options:

1. **Eat a candy** (only possible if the box contains at least one candy).
   This removes exactly one candy from the box.

2. **Put candies into the box.**
   Each time she uses this option, she must put **one more candy than the previous time she added candies**.

This means the candy additions follow the sequence:

```
1, 2, 3, 4, 5, ...
```

After performing exactly `n` actions, the box contains `k` candies.

The goal is to determine **how many candies Alya ate**, which corresponds to the number of times she performed the first option (removing one candy).

It is guaranteed that a valid answer always exists and that the answer is unique.

---

## Input

The input contains two integers:

* `n` — the total number of actions
* `k` — the number of candies remaining in the box after all actions

Constraints:

* `1 ≤ n ≤ 10⁹`
* `0 ≤ k ≤ 10⁹`

---

## Output

Print a single integer — the total number of candies Alya ate.

Each eating action removes exactly **one candy from the box**.

---

## Explanation of the Solution

### Key Observation

Every time Alya performs the **second option**, she adds candies following the increasing sequence:

```
1 + 2 + 3 + ... + m
```

This sum is a **triangular number**:

```
m(m+1) / 2
```

If Alya performs `m` candy-adding actions, then the total candies added is the sum above.

During the remaining actions she eats candies, and each eating action removes exactly one candy.

Since the total number of actions is `n`, we can relate:

* number of additions
* number of eaten candies
* final candies `k`

This allows us to derive a mathematical relationship between these values.

---

### Approach

Let:

```
x = number of candies eaten
```

Then the number of candy-adding actions is:

```
n - x
```

The candies added follow the triangular sequence:

```
1 + 2 + 3 + ... + (n - x)
```

which equals:

```
(n - x)(n - x + 1) / 2
```

Since Alya eats `x` candies, the final number of candies becomes:

```
(n - x)(n - x + 1) / 2 - x = k
```

We need to find the value of `x` that satisfies this equation.

Because `n` can be as large as `10⁹`, we cannot simulate the actions.
Instead, we solve the equation mathematically or use binary search to find `x`.

---

### Complexity

**Time Complexity:**
`O(log n)` when using binary search.

**Space Complexity:**
`O(1)`

---

## Implementation

Code implementation of the solution.


## Explanation of the Solution

### Key Observation

The grid is filled with numbers from `1` to `n²` in increasing order from left to right and from top to bottom.

Therefore, the largest values are located in the **bottom-right corner** of the grid.

Since the cost of a cell includes the value of its neighbors, cells that contain larger numbers are more likely to produce larger costs.

Because of this, the maximum cost must occur **near the bottom-right corner of the grid**.

---

### Approach

Instead of evaluating every cell in the grid, we focus on the **bottom-right 2×2 block**, since it contains the largest values.

```
(n-1,n-1)   (n-1,n)
(n,n-1)     (n,n)
```

However:

* `(n,n)` only has two neighbors, so its cost is relatively small.
* `(n-1,n)` behaves similarly to `(n,n-1)` but produces a slightly smaller result.

This leaves two relevant candidates:

* `(n-1,n-1)`
* `(n,n-1)`

By computing the cost of these two cells and simplifying the expressions, we obtain:

For `(n-1,n-1)`:

```
4n² − n − 4
```

For `(n,n-1)`:

```
5(n² − n − 1)
```

The final answer is simply the maximum of these two expressions.

---

### Complexity

**Time Complexity:** `O(1)` per test case
**Space Complexity:** `O(1)`

---

## Implementation

Can be found in the `solution.cpp` file.
