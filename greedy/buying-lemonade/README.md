# Buying Lemonade

**Platform:** Codeforces

**Problem:** Buying Lemonade

**Link:** https://codeforces.com/problemset/problem/2020/B

**Difficulty:** 1100

**Tags:** greedy, constructive algorithms, sorting, binary search

**Date Solved:** 2026-03-12

---

## Problem Summary

A vending machine has **n slots**, and the *i-th* slot initially contains **aᵢ cans of lemonade**.

There are **n buttons**, each corresponding to a slot, but the labels are worn off, so we do not know which button corresponds to which slot.

When pressing a button:

* If the slot still contains cans, one can drops.
* If the slot is empty, nothing happens.

We **cannot see the slots**, and we cannot tell which slot produced the can.

The goal is to determine the **minimum number of button presses required to guarantee at least `k` cans**, assuming we adapt our strategy based on whether a press produced a can or not.

It is guaranteed that:

```
k ≤ a₁ + a₂ + ... + aₙ
```

so enough cans exist.

---

## Input

Each test case contains:

* `n` — number of slots
* `k` — number of cans we want to guarantee

Next line:

* `a₁, a₂, ..., aₙ` — initial cans in each slot

Constraints:

* `1 ≤ t ≤ 10⁴`
* `1 ≤ n ≤ 2 · 10⁵`
* `1 ≤ k ≤ 10⁹`
* `1 ≤ aᵢ ≤ 10⁹`
* Sum of all `n` across test cases ≤ `2 · 10⁵`

---

## Output

For each test case, print the **minimum number of button presses** required to guarantee at least `k` cans.

---

# Explanation of the Solution

## Key Observation

Even though the button labels are unknown, we know the **initial number of cans in each slot**.

Instead of thinking about specific buttons, we can think about the machine **layer by layer**.

Each slot contributes a vertical stack of cans:

```
slot height = aᵢ
```

If we visualize all slots as stacks, we can process the cans **level by level** (or layer by layer).

Example:

```
Slot heights: 2 1 3

Layer 1: █ █ █
Layer 2: █   █
Layer 3:     █
```

Pressing every button once corresponds to **removing one full layer** of cans from all slots that still have cans.

---

## Approach

We group slots by their height and process them in **ascending order of height**.

Let:

* `slots_left` = number of slots that still contain cans
* `prev_layer` = previous height processed
* `delta` = difference between the current height and the previous one

This means there are `delta` full layers between them.

Each full layer yields:

```
slots_left cans
```

So the total cans available in that block is:

```
delta × slots_left
```

If that block already contains enough cans to reach `k`, we stop.

Otherwise we consume the whole block.

### Tracking useless presses

When a slot becomes empty, its button may still be pressed once before we realize it is empty.

Those presses produce **no cans**, so we count them as **extra presses**.

We store them in:

```
result
```

Every time a slot runs out of cans we add:

```
result += number of slots that ended
```

because each of those slots will eventually cause one wasted press.

---

### Algorithm steps

1. Count how many slots have each height.
2. Process heights in ascending order.
3. For each height:

   * Compute how many layers (`delta`) exist.
   * Compute how many cans are available in that block.
4. If the block contains enough cans to reach `k`, stop.
5. Otherwise:

   * Consume the entire block.
   * Remove the slots that ended.
   * Add their wasted presses to the result.
6. The final answer is:

```
k + wasted_presses
```

Because we need at least `k` successful presses plus the unavoidable wasted ones.

---

## Complexity

Building the map:

```
O(n log n)
```

Processing the layers:

```
O(number of unique heights)
```

Overall per test case:

```
O(n log n)
```

which fits comfortably within the constraints.

---

## Implementation

Can be found in the `solution.cpp` file.
