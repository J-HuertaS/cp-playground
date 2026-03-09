# Traffic Light

**Platform:** Codeforces
**Problem:** C. Traffic Light
**Link:** https://codeforces.com/problemset/problem/1744/C

---

## Problem Summary

You are standing at a crosswalk controlled by a traffic light that cycles through a repeating sequence of colors.
The sequence is represented by a string `s` of length `n`, where each character is one of:

* `r` — red
* `y` — yellow
* `g` — green

At second `1` the light shows `s₁`, at second `2` it shows `s₂`, and so on until second `n`.
After that, the sequence repeats indefinitely.

You are allowed to cross the road **only when the light is green (`g`)**.

You know the **current color of the light (`c`)**, but you **do not know the exact position in the cycle**.
This means the current moment could correspond to **any index `i` where `s[i] = c`**.

Your task is to determine the **minimum number of seconds you must wait to be guaranteed that the light will turn green**, regardless of which valid position in the cycle you are currently in.

Since the exact position is unknown, you must consider the **worst possible starting position** among all occurrences of `c` in the sequence.

---

## Input

The first line contains an integer `t` — the number of test cases.

For each test case:

* The first line contains an integer `n` and a character `c`

  * `n` — the length of the traffic light cycle
  * `c` — the current color of the traffic light

* The second line contains a string `s` of length `n` describing the traffic light cycle.

Constraints:

* `1 ≤ t ≤ 10⁴`
* `1 ≤ n ≤ 2 × 10⁵`
* The total sum of `n` over all test cases does not exceed `2 × 10⁵`
* The string `s` contains only the characters `r`, `y`, and `g`
* The string `s` is guaranteed to contain at least one `g`
* The string `s` is guaranteed to contain the character `c`

---

## Output

For each test case, print a single integer representing the minimum number of seconds required to guarantee that the traffic light will become green.

If the current color is already green (g), the answer is 0 because you can cross the road immediately.

---

## Explanation of the Solution

### Key Observation

The traffic light follows a **cyclic pattern**, meaning the sequence repeats indefinitely.

We know the **current color `c`**, but we **do not know the exact position in the cycle**.
Therefore, the current position could correspond to **any index `i` where `s[i] = c`**.

For each possible starting position, we need to determine **how long it takes until the next green light (`g`) appears**.

Since we want to be **guaranteed** to cross the road, we must consider the **worst possible case** among all occurrences of `c`.
In other words, we compute the time from each `c` to the next `g`, and take the **maximum of these values**.

---

### Approach

To simplify the cyclic behavior of the traffic light, we duplicate the string:

```
s = s + s
```

This allows us to treat the sequence as if it were linear while still preserving the cyclic property.

The algorithm works as follows:

1. Duplicate the string to simulate the repeating cycle.
2. Traverse the extended string from left to right.
3. When we encounter the character `c`, we start measuring the distance until the next `g`.
4. Once a `g` is found, we update the maximum waiting time.
5. Repeat this process for all occurrences of `c`.
6. The final answer is the **maximum waiting time found**, since this represents the worst-case scenario.

This works because duplicating the string guarantees that every occurrence of `c` will eventually encounter a `g` without needing special circular logic.

---

### Complexity

**Time Complexity:**
`O(n)` per test case, since we perform a linear scan of the duplicated string.

**Space Complexity:**
`O(n)` due to the duplicated string used to handle the cyclic behavior.

---

## Implementation

Can be found in the `solution.cpp` file.

