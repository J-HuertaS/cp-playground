# Even Odds

**Platform:** Codeforces  

**Problem:** Even Odds  

**Link:** https://codeforces.com/problemset/problem/318/A  

**Difficulty:** 900  

**Tags:** math  

**Date Solved:** 2026-03-12

---

## Problem Summary

Volodya rearranges the first `n` natural numbers in a specific order.

The sequence is constructed as follows:

1. First, all **odd numbers** from `1` to `n` in ascending order.
2. Then, all **even numbers** from `1` to `n` in ascending order.

The task is to determine **which number appears in position `k`** of this new sequence.

Since `n` can be as large as **10¹²**, constructing the sequence explicitly is not possible. Instead, we must determine the value mathematically.

---

## Input

The input contains two integers:

- **n** — the number of natural numbers considered  
- **k** — the position in the rearranged sequence

Constraints:

- 1 ≤ k ≤ n ≤ 10¹²

---

## Output

Print the number that appears at **position `k`** in the constructed sequence.

---

## Explanation of the Solution

### Key Observation

The sequence is divided into **two parts**:

1. All **odd numbers**
2. All **even numbers**

The number of odd numbers between `1` and `n` is:

- `(n + 1) / 2`

Therefore:

- If `k` is within the **odd section**, the answer is the `k`-th odd number.
- Otherwise, the answer belongs to the **even section**.

---

### Approach

1. Compute the number of odd numbers:

   `(n + 1) / 2`

2. If `k` is within the odd section:

   the `k`-th odd number is  
   `2*k - 1`

3. Otherwise:

   subtract the number of odd elements and compute the corresponding even number.

---

### Complexity

**Time Complexity:** O(1)

The answer is computed using simple arithmetic.

**Space Complexity:** O(1)

Only a few variables are used.

---

## Implementation

Can be found in the `solution.cpp` file.