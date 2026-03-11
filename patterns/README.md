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