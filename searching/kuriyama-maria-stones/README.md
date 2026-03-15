# Kuriyama Mirai's Stones

**Platform:** Codeforces  

**Problem:** Kuriyama Mirai's Stones  

**Link:** https://codeforces.com/problemset/problem/433/B  

**Difficulty:** 1200 

**Tags:** dp, implementation, sortings

**Date Solved:** 2026-03-15

---

## Problem Summary

Kuriyama Mirai has `n` stones, each with a cost `v_i`.

She asks `m` queries of two possible types:

1. Given `l` and `r`, compute the **sum of stone costs from index `l` to `r`** in the original order.
2. First imagine the stones **sorted in non-decreasing order of cost**. Then compute the **sum from index `l` to `r`** in this sorted list.

Because both `n` and `m` can be as large as `10^5`, computing the sum by iterating through the range for every query would be too slow.

The goal is to preprocess the data so each query can be answered efficiently.

---

## Input

- `n` — number of stones (1 ≤ n ≤ 10^5)

- `v1, v2, ..., vn` — costs of the stones  
  (1 ≤ v_i ≤ 10^9)

- `m` — number of queries (1 ≤ m ≤ 10^5)

Each query contains:

- `type` — query type (1 or 2)
- `l` — left index
- `r` — right index

Constraints:

- `1 ≤ l ≤ r ≤ n`

---

## Output

For each query, print a single integer representing the requested sum.

The answers must be printed **in the same order as the queries**.

---

## Explanation of the Solution

### Key Observation

Each query asks for a **range sum**.

If we preprocess the array using **prefix sums**, we can answer each query in constant time.

However, we must support two different arrays:

- the **original array**
- the **sorted array**

So we compute prefix sums for **both**.

---

### Approach

1. Read the stone costs.

2. Build a prefix sum array for the **original order**:

```
prefix[i] = v1 + v2 + ... + v_i
```

3. Create a copy of the array and **sort it**.

4. Build another prefix sum array for the **sorted array**.

5. For each query:

If `type = 1`:

```
answer = prefix[r] - prefix[l-1]
```

If `type = 2`:

```
answer = sorted_prefix[r] - sorted_prefix[l-1]
```

Each query is therefore answered in **O(1)** time.

---

### Complexity

**Time Complexity:** O(n log n + m)

- Sorting takes `O(n log n)`
- Each query is answered in `O(1)`

**Space Complexity:** O(n)

Two prefix arrays are stored.

---

## Implementation

Can be found in the `solution.cpp` file.