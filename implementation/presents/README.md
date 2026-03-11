# Presents

**Platform:** Codeforces 

**Problem:** Presents  

**Link:** https://codeforces.com/problemset/problem/136/A  

**Difficulty:** 800  

**Tags:** implementation  

**Date Solved:** 2026-03-11

---

## Problem Summary

Petya invited **n friends** to a party where they exchanged gifts.  
Each friend is numbered from **1 to n**.

Petya remembers that **friend `i` gave a gift to friend `p_i`**.  
It is guaranteed that **every friend received exactly one gift**.

Now Petya wants to determine, for each friend `i`, **which friend gave them a gift**.

In other words, we are given the mapping of **who gives a gift to whom**, and we must determine the **inverse mapping**: who received a gift from each friend.

---

## Input

The input format is:

- **n** — number of friends (1 ≤ n ≤ 100)
- **p₁, p₂, ..., pₙ** — where `p_i` is the friend who received a gift from friend `i`

Important notes:

- Each friend receives **exactly one gift**
- Some friends may **give a gift to themselves**

---

## Output

Print **n space-separated integers**.

The **i-th number** should represent **the friend who gave a gift to friend `i`**.

---

## Explanation of the Solution

### Key Observation

The array `p` describes **who each friend gives a gift to**.

However, the problem asks us to determine **who gave a gift to each friend**.

This means we need to compute the **inverse mapping** of the given permutation.

---

### Approach

1. Read `n`.
2. For each friend `i`, read `p_i`, which represents the friend receiving the gift.
3. Store the inverse relation so that:
   - the friend who gave the gift to `p_i` is `i`.
4. After processing all friends, print the resulting array.

---

### Complexity

**Time Complexity:** O(n)

We process the input once and output the result once.

**Space Complexity:** O(n)

We store the inverse mapping in an auxiliary array.

---

## Implementation

Can be found in the `solution.cpp` file.