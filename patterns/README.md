# Competitive Programming Patterns

This document tracks algorithmic patterns discovered while solving problems.

The goal is to build a reference of **reusable problem-solving techniques** that appear frequently in competitive programming.

Each pattern includes:
- the core idea
- when it is useful
- example problems from this repository

---

# 1. Frequency Counting

## Idea

Count how many times each value appears in a dataset.

Instead of repeatedly scanning the array, we store the counts in a structure such as:

- array
- map
- unordered_map

This allows us to process data efficiently and make decisions based on frequencies.

## When to Recognize It

Look for this pattern when:

- you need to count occurrences
- elements belong to a small range
- grouping or matching items is required

## Example Problems

- Magnets
- Taxi

---

# 2. Greedy Strategy

## Idea

Make the **locally optimal choice at each step** in order to reach a global optimum.

Greedy algorithms work when taking the best immediate action never prevents reaching the optimal final result.

## When to Recognize It

Common signals:

- minimize or maximize something
- local decisions seem independent
- sorting or grouping helps simplify the problem

## Example Problems

- Twins
- Taxi
- Elephant

---

# 3. Simulation / Implementation

## Idea

Directly simulate the process described in the problem statement.

These problems usually involve applying operations step by step exactly as defined.

## When to Recognize It

Signals:

- the problem describes a process
- operations occur sequentially
- no complex optimization is needed

## Example Problems

- Queue at the School
- Bit++
- Stones on the Table
- Arrival of the General
- Vanya and Fence

---

# 4. Prefix / Running Aggregation

## Idea

Maintain a running value while iterating through elements.

Examples:

- running sum
- running average
- cumulative counters

Instead of recomputing values repeatedly, we update a variable as we traverse the input.

## When to Recognize It

Look for:

- cumulative totals
- averages
- sequential updates

## Example Problems

- Drinks
- Kuriyama Mirai's Stones

---

# 5. Mathematical Pattern Recognition

## Idea

Identify a mathematical pattern or formula that replaces a brute-force computation.

This often appears when:

- constraints are extremely large
- brute force would be too slow

Finding the mathematical structure allows computing the answer in constant time.

## When to Recognize It

Signals:

- very large constraints
- repetitive alternating patterns
- arithmetic sequences

## Example Problems

- Calculating Function
- Soldier and Bananas
- Fence

---

# 6. Permutation / Inverse Mapping

## Idea

Given a mapping from `A → B`, reconstruct the inverse mapping `B → A`.

This commonly appears in permutation problems.

Instead of searching each time, we directly store the inverse relation.

## When to Recognize It

Signals:

- elements numbered 1..n
- one-to-one mappings
- permutations

## Example Problems

- Presents

---

# 7. String / Character Manipulation

## Idea

Operate directly on characters of a string.

Typical operations include:

- changing case
- comparing characters
- counting specific digits

## When to Recognize It

Signals:

- input is a string
- operations are character-based
- transformations are simple

## Example Problems

- Word Capitalization
- Nearly Lucky Number

# 8. Grid Distance (Manhattan Distance)

## Idea

Measure distance in a grid using:

|x1 - x2| + |y1 - y2|

This represents the minimum number of steps needed to move between two cells when movement is allowed in four directions.

## When to Recognize It

Look for this pattern when:

- working on a grid
- moving objects toward a target position
- operations move elements one step at a time

## Example Problems

- Beautiful Matrix

---

# 9. Distinct Elements / Set Usage

## Idea

Use a data structure that stores only unique elements (such as a set) to count how many distinct values exist in a collection.

This avoids manually checking duplicates.

## When to Recognize It

Look for this pattern when:

- you need the number of unique elements
- duplicates should be ignored
- the input size is small or bounded

Typical structures used:

- set
- unordered_set
- boolean arrays for small alphabets

## Example Problems

- Boy or Girl

---

# 10. Mathematical Index Mapping

## Idea

Instead of constructing a sequence explicitly, determine the value at a specific position using mathematical formulas.

This pattern is useful when the sequence follows a predictable structure but the constraints are too large to generate it directly.

## When to Recognize It

Look for this pattern when:

- constraints are extremely large (e.g., up to 10^12)
- the sequence is defined by a rule
- you are asked for the element at position `k`

In these cases, simulate the sequence **mathematically**, not physically.

## Example Problems

- Even Odds


# 11. Layer Processing / Level Simulation

## Idea

Instead of simulating operations one by one, process the structure **by layers (levels)**.

When multiple elements contribute equally in each step, we can group many operations together and process them at once.

For example, if there are `m` active elements and we advance `d` levels, the total gain is:

```
gain = m × d
```

This allows processing large numbers of operations in constant time instead of iterating step by step.

## When to Recognize It

Look for this pattern when:

* elements can be visualized as **stacks, heights, or levels**
* each iteration affects **all active elements equally**
* the state changes only when some elements **become exhausted**
* simulating step by step would be too slow

Typical approach:

* sort values or group them by height
* process differences between consecutive levels
* track how many elements remain active

## Example Problems

* Buying Lemonade


# 12. Sliding Window on Sorted Data (Two Pointers)

## Idea

When a constraint depends on the **difference between the minimum and maximum values** in a subset, sorting the data can transform the problem into finding a **valid contiguous segment**.

After sorting, we maintain a **window [left, right]** that represents the current valid group.

Two pointers are used to:

- expand the window (right++)
- shrink the window (left++)

while maintaining the required constraint.

A running value (such as a sum) can be maintained to efficiently compute the best answer.

---

## When to Recognize It

Look for this pattern when:

- constraints involve **difference between values**
- elements can be **sorted to simplify the condition**
- you must maximize or minimize something inside a **valid range**
- the subset becomes a **continuous segment after sorting**

Typical signals:

- `max - min ≤ k`
- `difference < d`
- maximize/minimize sum within a range

---

## Example Problems

- Kefa and Company

# 13. Binary Search on the Answer

## Idea

Instead of searching within a sorted array, we binary search the **space of possible answers**.

We define a function:

can(x)

that checks whether it is possible to achieve a solution with value `x`.

The key requirement is **monotonicity**:

- if `can(x)` is true
- then `can(x-1)` is also true

or the opposite direction depending on the problem.

This allows us to use binary search to find the maximum or minimum feasible answer.

---

## When to Recognize It

Look for this pattern when:

- the problem asks for a **maximum or minimum possible value**
- the answer range is **very large**
- you can design a **feasibility check**
- brute force over all answers would be too slow

Typical signals:

- maximize production
- minimize cost
- maximize number of items
- constraints up to `10^12` or larger

---

## Example Problems

- Hamburgers

# 14. DFS with State Propagation (Tree Traversal)

## Idea

Traverse a tree using DFS while carrying additional information along the path.

Instead of only visiting nodes, we maintain a **state variable** that represents information about the path from the root to the current node.

Examples of state:

- number of consecutive cats
- current sum of weights
- maximum value seen so far
- depth of the node

At each step the state is updated and passed to the recursive call.

If a constraint is violated, the search can stop early (pruning).

---

## When to Recognize It

Look for this pattern when:

- the structure is a **tree**
- conditions depend on the **path from the root**
- you must track some value **along the traversal**
- invalid paths can be **pruned early**

Typical tasks:

- counting valid leaves
- path constraints
- path sums
- tree exploration problems

---

## Example Problems

- Kefa and Park


# 15. BFS on State Space (Shortest Path in Implicit Graph)

## Idea

Instead of receiving an explicit graph as input, the graph is defined by **states and transitions between them**.

Each state represents a possible configuration of the problem.

Transitions define how we move from one state to another.

If every transition has the same cost, we can use **Breadth-First Search (BFS)** to find the minimum number of operations needed to reach a target state.

---

## When to Recognize It

Look for this pattern when:

- the problem asks for the **minimum number of operations**
- operations transform a **state into another state**
- states can be treated as nodes in a graph
- transitions define edges between states
- all operations have **equal cost**

Typical signals:

- minimum number of moves
- minimum operations
- transformation problems
- state exploration

---

## Example Problems

- Two Buttons

# 16. Range Frequency Counting (Difference Array)

## Idea

When many queries affect ranges `[l, r]`, updating every element inside the range would be too slow.

Instead we use a **difference array**.

For each range:

diff[l] += 1  
diff[r+1] -= 1  

After processing all queries, a prefix sum reconstructs how many times each position was affected.

This technique reduces many range updates from:

O(n × q)

to

O(n + q)

---

## When to Recognize It

Look for this pattern when:

- there are many **range updates**
- ranges affect all elements between `l` and `r`
- you need the **final frequency of each position**

Typical signals:

- many queries
- constraints up to `2e5` or higher
- naive range iteration would be too slow

---

## Example Problems

- Little Girl and Maximum Sum

# 17. DP - Take or Skip (House Robber Pattern)

## Idea

For each value `x`, decide whether to:

- take it → gain `x * frequency[x]` but skip adjacent values
- skip it → move to the next value

This creates a dependency where choosing an element prevents choosing its neighbors.

The problem is solved by building a DP array where each state represents the best result up to a certain value.

---

## When to Recognize It

Look for this pattern when:

- choosing an element **disables adjacent elements**
- decisions are **binary (take or skip)**
- elements can be **grouped by value or position**
- the problem resembles:
  - "cannot take neighbors"
  - "maximum sum without adjacent elements"

Typical signals:

- adjacency restrictions
- maximize sum with constraints
- frequency transformation helps simplify the problem

---

## Example Problems

- Boredom

# 18. Mathematical Reduction to Prime Check

## Idea

Transform the problem using a mathematical observation that simplifies the condition.

Instead of directly counting divisors, identify that:

- a number has exactly 3 divisors if and only if it is the square of a prime

This reduces the problem to:

- checking if a number is a perfect square
- checking if its square root is prime

---

## When to Recognize It

Look for this pattern when:

- the problem involves number of divisors
- constraints are very large (up to 10^12 or more)
- brute force divisor counting is too slow
- a mathematical property can simplify the condition

Typical signals:

- divisor-related problems
- perfect squares
- prime numbers
- constraints that suggest precomputation

---

## Example Problems

- T-primes

# 19. Greedy on Segments (Same Sign Grouping)

## Idea

Group consecutive elements that share a common property (e.g., same sign).

Instead of picking all elements, select the **best element from each group**.

This ensures:

- maximum length of valid structure
- optimal contribution per segment

---

## When to Recognize It

Look for this pattern when:

- elements can be grouped (same sign, same type, etc.)
- you must alternate or switch between groups
- you need to maximize a value while keeping structure constraints

Typical signals:

- alternating sequences
- positive/negative grouping
- segments with same property

---

## Example Problems

- Alternating Subsequence