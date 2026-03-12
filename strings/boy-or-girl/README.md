# Boy or Girl

**Platform:** Codeforces  

**Problem:** Boy or Girl  

**Link:** https://codeforces.com/problemset/problem/236/A  

**Difficulty:** 800  

**Tags:** brute force, implementation, strings  

**Date Solved:** 2026-03-12

---

## Problem Summary

A username is given as a string consisting only of lowercase English letters.

The rule to determine the gender is based on the **number of distinct characters** in the username:

- If the number of distinct characters is **even**, the user is considered **female**.
- If the number of distinct characters is **odd**, the user is considered **male**.

The task is to count the number of **distinct characters** in the username and print the corresponding message.

---

## Input

The input consists of a single string:

- **username** — a non-empty string containing only lowercase English letters.

Constraints:

- Length of the string ≤ 100.

---

## Output

Print one of the following messages:

- `"CHAT WITH HER!"` if the number of distinct characters is **even**
- `"IGNORE HIM!"` if the number of distinct characters is **odd**

---

## Explanation of the Solution

### Key Observation

We only need to determine how many **unique characters** appear in the string.

Once we know this number:

- If it is **even**, the answer is `"CHAT WITH HER!"`
- If it is **odd**, the answer is `"IGNORE HIM!"`

---

### Approach

1. Read the username string.
2. Insert each character into a structure that keeps **unique elements** (such as a set).
3. Compute the number of distinct characters.
4. Check if the count is even or odd.
5. Print the corresponding message.

---

### Complexity

**Time Complexity:** O(n)

We iterate through the string once.

**Space Complexity:** O(1)

At most 26 characters can appear.

---

## Implementation

Can be found in the `solution.cpp` file.