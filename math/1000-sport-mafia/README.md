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

If Alya performs `m` candy-adding actions, then the total number of candies added to the box is given by the triangular sum above.

During the remaining actions she eats candies, and each eating action removes exactly one candy from the box.

Since the total number of actions is `n`, the actions can be divided into:

* `m` candy-adding actions
* `n - m` candy-eating actions

This relationship allows us to express the final number of candies in the box using a mathematical equation.

---

### Approach

Let:

```
m = number of candy-adding actions
```

Then the number of eating actions is:

```
n - m
```

The candies added follow the triangular sequence:

```
1 + 2 + 3 + ... + m
```

which equals:

```
m(m+1) / 2
```

Since Alya eats one candy per eating action, the final number of candies remaining in the box becomes:

```
m(m+1) / 2 - (n - m)
```

We are given that the final number of candies is `k`, therefore:

```
m(m+1) / 2 - (n - m) = k
```

To solve the problem, we search for the value of `m` that satisfies this condition.

Because `n` can be as large as `10⁹`, directly simulating the actions is not feasible.
Instead, we use **binary search** over the possible values of `m` to efficiently find the correct value.

Once `m` is found, the number of candies eaten is simply:

```
n - m
```

---

### Complexity

**Time Complexity:**
`O(log n)` using binary search.

**Space Complexity:**
`O(1)`

---

## Implementation

Can be found in the `solution.cpp` file.

