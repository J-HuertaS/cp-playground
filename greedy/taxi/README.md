# Taxi

**Platform:** Codeforces  

**Problem:** Taxi  

**Link:** https://codeforces.com/problemset/problem/158/B  

**Difficulty:** 1100  

**Tags:** greedy, implementation 

**Date Solved:** 2026-03-11

---

## Problem Summary

After school, `n` groups of children want to go to Polycarpus' birthday party.

Each group has between **1 and 4 children**, and **all members of a group must ride in the same taxi**. However, a taxi can carry **multiple groups**, as long as the total number of passengers does not exceed **4**.

The goal is to determine the **minimum number of taxis** required to transport all groups.

---

## Input

The input format is:

- **n** — number of groups (1 ≤ n ≤ 10⁵)
- **s₁, s₂, ..., sₙ** — size of each group

Constraints:

- 1 ≤ sᵢ ≤ 4
- Each group must stay together in the same taxi.

---

## Output

Print a single integer:

- The **minimum number of taxis** needed to transport all groups.

---

## Explanation of the Solution

### Key Observation

Since each taxi can carry **at most 4 passengers**, the optimal strategy is to combine groups in a way that fills taxis as efficiently as possible.

Some combinations naturally fit perfectly:

- A group of **4** occupies a taxi alone.
- A group of **3** can be paired with a group of **1**.

After handling these combinations, the remaining groups of **1** and **2** can be packed together as efficiently as possible.

---

### Approach

1. Count how many groups of each size exist (1, 2, 3, 4).
2. Groups of **4** each require their own taxi.
3. Pair groups of **3** with groups of **1** whenever possible.
4. Groups of **2** can pair together (two groups per taxi).
5. Remaining groups of **1** and **2** are combined to fill taxis with capacity 4.
6. If any passengers remain after packing, allocate one more taxi.

---

### Complexity

**Time Complexity:** O(n)

We only scan the input once to count the groups.

**Space Complexity:** O(1)

Only a fixed number of counters are used.

---

## Implementation

Can be found in the `solution.cpp` file.