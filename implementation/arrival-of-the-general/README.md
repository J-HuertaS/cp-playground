# Arrival of the General

**Platform:** Codeforces  

**Problem:** Arrival of the General  

**Link:** https://codeforces.com/problemset/problem/144/A  

**Difficulty:** 800  

**Tags:** implementation  

**Date Solved:** 2026-03-11

---

## Problem Summary

There are **n soldiers** standing in a line, each with a given height.

The general considers the formation correct if:

- The **first soldier** has the **maximum height**.
- The **last soldier** has the **minimum height**.

The positions of the other soldiers **do not matter**.

The colonel can **swap adjacent soldiers**, and each swap takes **1 second**.

The goal is to compute the **minimum number of seconds** needed to make the formation acceptable to the general.

If multiple soldiers share the same maximum or minimum height:

- The **first occurrence of the maximum height** should be moved to the front.
- The **last occurrence of the minimum height** should be moved to the end.

---

## Input

The input format is:

- **n** — number of soldiers (2 ≤ n ≤ 100)
- **a₁, a₂, ..., aₙ** — heights of the soldiers

Important constraints:

- 1 ≤ aᵢ ≤ 100
- Heights **are not necessarily distinct**

---

## Output

Print a single integer:

- The **minimum number of adjacent swaps** required so that:
  - the tallest soldier is at the **beginning**
  - the shortest soldier is at the **end**

---

## Explanation of the Solution

### Key Observation

Moving a soldier using adjacent swaps is equivalent to the **distance between their current position and the target position**.

Therefore:

- Moving the **maximum height** soldier to the front requires `index_max` swaps.
- Moving the **minimum height** soldier to the end requires `n - 1 - index_min` swaps.

If the maximum soldier is originally **before the minimum soldier**, moving the maximum first shifts the minimum one position to the left, so we subtract **one swap** from the total.

---

### Approach

1. Read `n` and the array of soldier heights.
2. Find:
   - the **first index of the maximum height**
   - the **last index of the minimum height**
3. Compute:
   - swaps required to move the maximum to the front
   - swaps required to move the minimum to the end
4. If the maximum appears before the minimum, subtract one swap due to the shift.
5. Add the swaps to obtain the final result.

---

### Complexity

**Time Complexity:** O(n)

The array is scanned a constant number of times.

**Space Complexity:** O(n)

The soldiers' heights are stored in an array.

---

## Implementation

Can be found in the `solution.cpp` file.