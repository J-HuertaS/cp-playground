# Vanya and Fence

**Platform:** Codeforces  

**Problem:** Vanya and Fence  

**Link:** https://codeforces.com/problemset/problem/677/A  

**Difficulty:** 800  

**Tags:** implementation  

**Date Solved:** 2026-03-12

---

## Problem Summary

Vanya and his friends are walking along a fence with height `h`.

Each friend has a height `a_i`.

If a person's height is:

- **≤ h** → they walk normally and take **width 1**
- **> h** → they must bend down and take **width 2**

All friends must walk **in a single row**, and we must determine the **minimum width of the road** required for them to pass without being noticed by the guard.

---

## Input

The input consists of:

- **n** — number of friends (1 ≤ n ≤ 1000)
- **h** — height of the fence (1 ≤ h ≤ 1000)

Second line:

- **a₁, a₂, ..., aₙ** — heights of the friends

Constraints:

- 1 ≤ aᵢ ≤ 2h

---

## Output

Print a single integer:

- the **minimum width of the road** required.

---

## Explanation of the Solution

### Key Observation

Each person contributes a fixed width depending on whether they need to bend or not.

- Normal person → width **1**
- Bent person → width **2**

Instead of explicitly adding 2 for bent people, we can observe that:

Every person contributes **at least 1**, and bent people add **one extra unit**.

Thus the total width is:

`n + number_of_people_with_height_greater_than_h`

---

### Approach

1. Read `n` and `h`.
2. Iterate through the heights of all friends.
3. Count how many have height greater than `h`.
4. The answer is `n + count`.

---

### Complexity

**Time Complexity:** O(n)

We scan the list of heights once.

**Space Complexity:** O(1)

Only a few variables are required.

---

## Implementation

Can be found in the `solution.cpp` file.