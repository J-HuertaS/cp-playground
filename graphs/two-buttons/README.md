# Two Buttons

**Platform:** Codeforces  

**Problem:** Two Buttons  

**Link:** https://codeforces.com/problemset/problem/520/B  

**Difficulty:** 1400  

**Tags:** dfs and similar, graphs, greedy, implementation, math, shortest paths 
 
**Date Solved:** 2026-03-17

---

## Problem Summary

Vasya has a device with a display showing an integer.

There are two possible operations:

- **Red button** → multiply the number by 2  
- **Blue button** → subtract 1 from the number

Initially the display shows `n`, and the goal is to reach a target value `m`.

The device breaks if the number becomes **non-positive**, so only positive numbers are valid.

The objective is to determine the **minimum number of button presses** needed to transform `n` into `m`.

---

## Input

Two integers:

- `n` — initial value
- `m` — target value

Constraints:

- `1 ≤ n, m ≤ 10^4`
- `n ≠ m`

---

## Output

Print a single integer — the **minimum number of button presses** required to transform `n` into `m`.

---

## Explanation of the Solution

### Key Observation

Each number can be considered a **state**, and each operation represents a **transition**:

```
x → x * 2
x → x - 1
```

This forms an **implicit graph** where nodes are numbers and edges represent operations.

Since every operation has equal cost, finding the minimum number of operations becomes a **shortest path problem**.

The optimal algorithm for shortest paths in an unweighted graph is **Breadth-First Search (BFS)**.

---

### Approach

1. Start BFS from the initial number `n`.

2. Use a queue storing pairs:

```
(number, steps)
```

3. For each state:

- If the number equals `m`, return the number of steps.

4. Otherwise generate the next states:

```
number - 1
number * 2
```

5. Maintain a **visited set** to avoid processing the same number multiple times.

6. Continue BFS level by level until `m` is reached.

Because BFS explores states in order of increasing distance, the first time we reach `m` corresponds to the **minimum number of operations**.

---

### Complexity

### Complexity

**Time Complexity:** O(M)

Where M is the size of the explored state space (bounded by about 2 × max(n, m)).

Each state is processed at most once in BFS.

**Space Complexity:** O(M)

---

## Implementation

Can be found in the `solution.cpp` file.