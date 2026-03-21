# T-primes

**Platform:** Codeforces  

**Problem:** T-primes  

**Link:** https://codeforces.com/problemset/problem/230/B  

**Difficulty:** 1300  

**Tags:** binary search, implementation, math, number theory  

**Date Solved:** 2026-03-21

---

## Problem Summary

We are given multiple numbers and must determine whether each one has exactly **three distinct divisors**.

A number has exactly three divisors if and only if it is the **square of a prime number**.

---

## Input

- `n` — number of elements (1 ≤ n ≤ 10^5)
- array `x` of size `n`
- constraints:
  - 1 ≤ xi ≤ 10^12

---

## Output

For each number, print:

- "YES" if it is a T-prime
- "NO" otherwise

---

## Explanation of the Solution

### Key Observation

A number has exactly three divisors **iff** it can be written as:

```
x = p^2
```

where `p` is a prime number.

Reason:

- divisors of `p^2` are: `1, p, p^2` → exactly 3

---

### Approach

1. Precompute all prime numbers up to `10^6` using the Sieve of Eratosthenes.
   - Because √(10^12) = 10^6

2. For each number `x`:
   - compute `r = floor(sqrt(x))`
   - check:
     - if `r * r == x` (perfect square)
     - and `r` is prime

3. If both conditions hold → "YES", else → "NO"

---

### Complexity

**Time Complexity:**  
- Sieve: O(n log log n)  
- Queries: O(n)

**Space Complexity:**  
- O(10^6)

---

## Implementation

Can be found in the `solution.cpp` file.