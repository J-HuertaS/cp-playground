# Little Girl and Maximum Sum

**Platform:** Codeforces  

**Problem:** Little Girl and Maximum Sum  

**Link:** https://codeforces.com/problemset/problem/276/C  

**Difficulty:** 1400  

**Tags:** greedy, prefix sums, sorting  

**Date Solved:** 2026-03-18

---

## Problem Summary

We are given an array `a` of `n` elements and `q` queries.

Each query specifies a range `[l, r]`, and the result of that query is the sum of the elements in that range.

However, before answering the queries, we are allowed to **reorder the array elements in any way we want**.

The goal is to reorder the array so that the **total sum of all query results is maximized**.

---

## Input

- `n` — number of elements in the array  
- `q` — number of queries  

Next line:

- `a1, a2, ..., an` — the array elements  
  (1 ≤ ai ≤ 2⋅10^5)

Next `q` lines:

- `li ri` — range of the query  
  (1 ≤ li ≤ ri ≤ n)

Constraints:

- `1 ≤ n, q ≤ 2⋅10^5`

---

## Output

Print a single integer — the **maximum possible total sum of all query results** after reordering the array.

---

## Explanation of the Solution

### Key Observation

Each query adds the values of the elements inside its range.

Instead of evaluating each query independently, we can count **how many times each index contributes to the total sum**.

Let:

```
freq[i]
```

be the number of queries that include index `i`.

Then the total sum of all query results becomes:

```
sum(freq[i] * value[i])
```

Since we can reorder the array, we should assign **larger values to indices with larger frequencies**.

---

### Approach

1. Compute how many times each index appears in the queries.

To do this efficiently, use a **difference array**:

For each query `[l, r]`:

```
freq[l]++
freq[r+1]--
```

2. Convert the difference array into the real frequencies using **prefix sums**.

3. Sort:

- the array values
- the frequency array

4. Pair the largest numbers with the largest frequencies.

5. Compute the final result:

```
result += value[i] * freq[i]
```

---

### Complexity

**Time Complexity:** O(n log n)

- Sorting dominates the runtime.

**Space Complexity:** O(n)

---

## Implementation

Can be found in the `solution.cpp` file.