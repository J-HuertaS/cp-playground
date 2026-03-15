# Kefa and Company

**Platform:** Codeforces  

**Problem:** Kefa and Company  

**Link:** https://codeforces.com/problemset/problem/580/B 

**Difficulty:** 1500  

**Tags:** binary search, sortings, two pointers  

**Date Solved:** 2026-03-14

---

## Problem Summary

Kefa wants to invite some of his friends to a restaurant.

Each friend has:

- `m` — the amount of money they have
- `s` — their friendship factor

A friend will feel **poor** if another friend in the company has **at least `d` more money** than them.

Therefore, in any valid group of invited friends:

```
max_money - min_money < d
```

Among all valid groups that satisfy this condition, we must find the group that **maximizes the total friendship factor**.

---

## Input

The input contains:

- `n` — number of friends (1 ≤ n ≤ 10^5)
- `d` — minimum money difference that causes someone to feel poor

Then `n` lines follow, each containing:

- `mi` — money of the i-th friend
- `si` — friendship factor

Constraints:

- `0 ≤ mi ≤ 10^9`
- `0 ≤ si ≤ 10^9`

---

## Output

Print a single integer — the **maximum possible total friendship factor** of a valid group of friends.

---

## Explanation of the Solution

### Key Observation

The restriction depends only on the **difference between the smallest and largest money values in the group**.

If we **sort friends by money**, any valid group must appear as a **contiguous segment in the sorted array**.

This allows us to scan the array using a **sliding window (two pointers)**.

---

### Approach

1. Store all friends as pairs `(money, friendship)`.

2. **Sort the friends by money**.

3. Use two pointers:

- `left` — start of the window
- `right` — end of the window

4. Maintain a variable `current` representing the **sum of friendship factors inside the window**.

5. Expand the window by moving `right` while:

```
money[right] - money[left] < d
```

6. If the condition breaks, shrink the window by moving `left` and subtracting its friendship value.

7. Track the maximum friendship sum seen during the process.

This efficiently finds the **best valid group**.

---

### Complexity

**Time Complexity:** O(n log n)  
Sorting dominates the complexity.

**Space Complexity:** O(n)

---

## Implementation

Can be found in the `solution.cpp` file.