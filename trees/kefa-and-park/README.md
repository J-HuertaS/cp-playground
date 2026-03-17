# Kefa and Park

**Platform:** Codeforces  

**Problem:** Kefa and Park  

**Link:** https://codeforces.com/problemset/problem/580/C  

**Difficulty:** 1500  

**Tags:** dfs and similar, graphs, trees  

**Date Solved:** 2026-03-16

---

## Problem Summary

Kefa lives at vertex `1` of a park represented as a **rooted tree**.

Some vertices contain cats. The leaf vertices represent **restaurants**.

Kefa wants to go to a restaurant, but he is afraid of cats. He refuses to go to a restaurant if the path from his house to that restaurant contains **more than `m` consecutive vertices with cats**.

The goal is to determine how many restaurants (leaf nodes) are reachable from the root without violating this constraint.

---

## Input

- `n` — number of vertices in the tree (2 ≤ n ≤ 10^5)  
- `m` — maximum allowed consecutive vertices with cats

Next line:

- `a1 ... an`

Where:

- `ai = 1` → vertex `i` contains a cat  
- `ai = 0` → vertex `i` does not contain a cat

Next `n - 1` lines:

- `xi yi` — an edge between vertices `xi` and `yi`

It is guaranteed that the graph forms a **tree**.

---

## Output

Print a single integer — the number of **leaf vertices (restaurants)** that can be reached from the root without encountering more than `m` consecutive cats along the path.

---

## Explanation of the Solution

### Key Observation

The park forms a **tree**, so there is exactly one path from the root to any vertex.

We must explore all paths from the root and keep track of how many **consecutive cats** appear along each path.

If the number exceeds `m`, the path is invalid and we stop exploring it.

This can be done naturally with a **Depth-First Search (DFS)**.

---

### Approach

1. Build the tree using an **adjacency list**.

2. Start a DFS from the root node (`1`).

3. While traversing:

   - If the current node has a cat, increase the consecutive counter.
   - Otherwise, reset the counter to `0`.

4. If the counter exceeds `m`, stop exploring that path.

5. When visiting neighbors, ignore the **parent node** to avoid returning to the previous vertex.

6. If a node has no children other than its parent, it is a **leaf** (restaurant).

7. Count that restaurant as valid.

---

### Complexity

**Time Complexity:** O(n)

Each vertex and edge is visited at most once.

**Space Complexity:** O(n)

The adjacency list stores all edges of the tree.

---

## Implementation

Can be found in the `solution.cpp` file.