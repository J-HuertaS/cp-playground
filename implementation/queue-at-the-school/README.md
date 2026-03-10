# Queue at the School

**Platform:** Codeforces

**Problem:** B. Queue at the School

**Link:** https://codeforces.com/problemset/problem/266/B

**Difficulty:** 800

**Tags:** implementation

**Date Solved:** 2026-03-10

---

## Problem Summary

During a school break, children form a queue in the canteen.

Each child is either:

* `B` — a boy
* `G` — a girl

Initially, the queue is given as a string `s`.

Every second, the following rule applies:

If a **boy (`B`) stands immediately in front of a girl (`G`)**, they **swap positions**.

This process happens simultaneously across the queue for each second.

The goal is to determine the **final arrangement of the queue after `t` seconds**.

---

## Input

The first line contains two integers:

* `n` — the number of children in the queue
* `t` — the number of seconds during which the process occurs

The second line contains a string `s` representing the initial queue.

Constraints:

* `1 ≤ n ≤ 50`
* `1 ≤ t ≤ 50`
* `s[i] ∈ {B, G}`

---

## Output

Print the string representing the **queue after `t` seconds**.

If the `i`-th position contains a boy, print `B`.
Otherwise, print `G`.

---

## Explanation of the Solution

### Key Observation

Each second, whenever a **boy (`B`) is directly followed by a girl (`G`)**, they swap positions.

Example:

```
BG → GB
```

However, after a swap occurs, the next position should **not immediately swap again during the same second**. Therefore, when a swap happens, we skip the next index.

---

### Approach

1. Read the integers `n` and `t`.
2. Read the string `s` representing the queue.
3. Repeat the following process `t` times:

   * Traverse the string from left to right.
   * If `s[i] == 'B'` and `s[i+1] == 'G'`:

     * Swap them.
     * Increment `i` to skip the next position.
4. After performing the simulation for `t` seconds, print the resulting string.

---

### Complexity

**Time Complexity:** `O(n · t)`
For each second we traverse the queue once.

**Space Complexity:** `O(1)`
The string is modified in place.

---

## Implementation

Can be found in the `solution.cpp` file.
