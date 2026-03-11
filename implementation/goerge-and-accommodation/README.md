# George and Accommodation

**Platform:** Codeforces

**Problem:** A. George and Accommodation

**Link:** https://codeforces.com/problemset/problem/467/A

**Difficulty:** 800

**Tags:** implementation

**Date Solved:** 2026-03-11

---

## Problem Summary

George and his friend Alex want to move into the same dormitory room.

There are `n` rooms in the dormitory. For each room:

* `p` — the number of people currently living in the room
* `q` — the total capacity of the room

The goal is to determine **how many rooms have enough free space for both George and Alex**.

Since two additional people want to move in, a room must have **at least two available spots**.

---

## Input

The first line contains an integer:

* `n` — the number of rooms.

The next `n` lines each contain two integers:

* `p` — current number of people in the room
* `q` — maximum capacity of the room

Constraints:

* `1 ≤ n ≤ 100`
* `0 ≤ p ≤ q ≤ 100`

---

## Output

Print a single integer — the number of rooms where **both George and Alex can move in**.

---

## Explanation of the Solution

### Key Observation

For George and Alex to move into a room, the room must have **at least two free spaces**.

The number of available spots in a room is:

```id="bt73xg"
q - p
```

If this value is greater than or equal to `2`, the room can accommodate both of them.

---

### Approach

1. Read the number of rooms `n`.
2. For each room:

   * Read `p` and `q`.
   * Compute the number of free spaces: `q - p`.
   * If `q - p ≥ 2`, increment a counter.
3. Print the counter.

---

### Complexity

**Time Complexity:** `O(n)`
We process each room exactly once.

**Space Complexity:** `O(1)`
Only a few variables are used.

---

## Implementation

Can be found in the `solution.cpp` file.
