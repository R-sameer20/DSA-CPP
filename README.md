# DSA-CPP 🚀

> My ongoing journey of learning **Data Structures, Algorithms, C++, and Problem Solving**.

This repository contains my implementations, practice problems, algorithms, and problem-solving journey in **C++**.

I started working on this repository in **September 2025** and have been continuously adding new concepts and problems as I learn.

The purpose of this repository is not just to collect solved questions, but to build a strong understanding of **how and why algorithms work**, implement them from scratch, analyze their complexity, and gradually improve my problem-solving skills.

---

## 📌 About This Repository

This is my personal **DSA learning and practice repository**.

It contains implementations and problems covering topics from basic C++ programming to more advanced Data Structures and Algorithms.

The repository is continuously evolving. Some older programs may be simple practice programs, while newer programs focus more on algorithmic problem solving and optimization.

My goal is to gradually transform this repository into a structured collection of programs that can be used for:

- Learning
- Practice
- Revision
- Interview preparation
- Competitive programming
- Understanding algorithmic patterns
- Improving problem-solving skills

---

# 🧠 Learning Philosophy

My approach to learning DSA is:

```text
        Learn the Concept
               ↓
      Understand the Logic
               ↓
       Implement in C++
               ↓
       Solve Problems
               ↓
   Analyze Time & Space Complexity
               ↓
     Practice Variations
               ↓
            Revise
```

I believe that solving a problem once is not enough.

The real goal is to understand the **pattern behind the problem**, so that the same idea can be applied to new problems.

---

# 📚 Topics Covered

The repository covers a wide range of DSA topics.

## 1. C++ Fundamentals

Basic programming concepts used as the foundation for DSA.

Topics include:

- Variables and data types
- Input and output
- Conditional statements
- Loops
- Functions
- Arrays
- Strings
- Pointers
- References
- Recursion
- Structures
- Basic STL
- Basic problem solving

---

## 2. Arrays

Problems and implementations involving arrays.

Topics include:

- Array traversal
- Searching
- Insertion
- Deletion
- Maximum and minimum elements
- Prefix-based techniques
- Two-pointer problems
- Array manipulation
- Subarrays
- Frequency-based problems
- Array-based mathematical problems

---

## 3. Strings

String manipulation and problem solving.

Topics include:

- String traversal
- Character frequency
- Palindromes
- String comparison
- Substrings
- String manipulation
- Character arrays
- String-based problem solving

---

## 4. Searching

Searching algorithms and related problems.

Topics include:

- Linear Search
- Binary Search
- Binary Search on Answer
- Searching in sorted arrays
- Searching in rotated arrays
- Lower Bound
- Upper Bound
- Search-space reduction

---

## 5. Sorting

Implementation and application of sorting algorithms.

Topics include:

- Bubble Sort
- Selection Sort
- Insertion Sort
- Merge Sort
- Quick Sort
- Sorting-based problem solving
- Custom sorting
- STL sorting

---

## 6. Recursion

Understanding problems by breaking them into smaller instances.

Topics include:

- Basic recursion
- Recursive functions
- Recursion on arrays
- Recursion on strings
- Recursive searching
- Recursive sorting
- Recursion with multiple calls
- Backtracking

---

## 7. Backtracking

Solving problems by exploring possible solutions and reverting when necessary.

Topics include:

- Subsets
- Subsequences
- Permutations
- Combination problems
- Maze problems
- Constraint-based problems
- Recursive backtracking

---

## 8. Linked Lists

Implementation and problem solving using linked lists.

Topics include:

- Singly Linked Lists
- Doubly Linked Lists
- Node creation
- Insertion
- Deletion
- Traversal
- Searching
- Reversal
- Fast and slow pointers
- Cycle detection
- Linked-list based problems

---

## 9. Stack

Stack data structure and related problems.

Topics include:

- Stack implementation
- Array-based stack
- STL stack
- Push
- Pop
- Top
- Stack-based problems
- Expression problems
- Monotonic stack concepts

---

## 10. Queue

Queue data structure and related problems.

Topics include:

- Queue implementation
- Circular Queue
- STL Queue
- Enqueue
- Dequeue
- Queue using stacks
- Stack using queues
- Queue-based problems

---

## 11. Trees 🌳

Tree data structures and traversal algorithms.

Topics include:

- Binary Trees
- Tree nodes
- Inorder Traversal
- Preorder Traversal
- Postorder Traversal
- Level Order Traversal
- Recursive tree problems
- Iterative tree problems
- Binary Search Trees
- Tree searching
- Tree insertion
- Tree deletion
- Tree-based problem solving

---

## 12. Graphs

Graph representation and traversal.

Topics include:

- Graph representation
- Adjacency Matrix
- Adjacency List
- BFS
- DFS
- Connected Components
- Graph traversal
- Graph-based problem solving

More advanced graph topics will be added as I progress.

---

## 13. Maps and Sets

Using C++ STL containers for efficient data handling.

Topics include:

- `map`
- `unordered_map`
- `set`
- `unordered_set`
- Frequency counting
- Duplicate detection
- Hashing-based problems
- Key-value based problem solving

---

## 14. STL

Important C++ Standard Template Library concepts.

Topics include:

- `vector`
- `pair`
- `array`
- `string`
- `stack`
- `queue`
- `deque`
- `priority_queue`
- `map`
- `unordered_map`
- `set`
- `unordered_set`
- STL algorithms
- Iterators

---

## 15. Greedy Algorithms

Problems where a locally optimal choice is used to construct a solution.

Topics include:

- Greedy strategy
- Sorting-based greedy
- Interval problems
- Selection problems
- Optimization problems

---

## 16. Dynamic Programming

Dynamic Programming concepts will be developed progressively.

Topics include:

- Recursion to DP
- Memoization
- Tabulation
- 1D DP
- 2D DP
- Subsequence problems
- Optimization problems
- State transitions

---

## 17. Mathematical & Number Theory Problems

Problems involving mathematical reasoning.

Topics include:

- Prime numbers
- Factors
- GCD
- LCM
- Number properties
- Modular arithmetic
- Combinatorics
- Basic number theory
- Mathematical problem solving

---

# 💻 LeetCode Practice

This repository also contains problems solved from **LeetCode**.

Some of the older LeetCode solutions were originally written directly in the format expected by the LeetCode platform:

```cpp
class Solution {
public:
    ...
};
```

While this format is valid for LeetCode submissions, it is not always ideal for a personal learning repository because the program cannot necessarily be compiled and executed independently.

Therefore, one of the ongoing cleanup tasks in this repository is to convert these solutions into **standalone C++ programs**.

### Before

```cpp
class Solution {
public:
    int solve(vector<int>& nums) {
        // solution
    }
};
```

### Preferred Format

```cpp
#include <iostream>
#include <vector>
using namespace std;

int solve(vector<int>& nums) {
    // solution
}

int main() {

    // Input

    // Function call

    // Output

    return 0;
}
```

The exact structure will depend on the problem.

The main goal is to make each program:

- Independent
- Compilable
- Executable
- Readable
- Testable
- Beginner-friendly

---

# 🛠️ Code Quality Goals

As this repository grows, I am gradually improving the quality of the code.

The long-term goal is for each solution to follow these principles:

### 1. Standalone Programs

Programs should be able to run outside platforms such as LeetCode whenever practical.

### 2. Readable Code

Variable and function names should make the logic understandable.

### 3. Proper Input and Output

Programs should clearly handle input and display the result.

### 4. Understandable Logic

The code should be written in a way that helps in understanding the underlying algorithm.

### 5. Complexity Analysis

Where possible, solutions will include:

```cpp
// Time Complexity: O(n)
// Space Complexity: O(1)
```

### 6. Independent Learning

The repository is intended to reflect my own learning and implementation process rather than simply being a collection of copied solutions.

---

# 📂 Repository Structure

The repository is organized according to the concepts and problems being practiced.

A typical structure may look like:

```text
DSA-CPP/
│
├── Arrays/
│
├── Binary Search/
│
├── Binary Search on Answer/
│
├── Binary Trees/
│
├── Dynamic Programming/
│
├── Graph/
│
├── Greedy/
│
├── Linked List/
│
├── Maps and Sets/
│
├── Recursion/
│
├── Sorting/
│
├── Stack/
│
├── Strings/
│
├── Trees/
│
├── Other Problems/
│
└── README.md
```

The exact structure may change as the repository grows.

---

# ▶️ How to Run the Programs

You need a C++ compiler such as **g++**.

## Compile

```bash
g++ filename.cpp -o program
```

For example:

```bash
g++ binarysearch.cpp -o binarysearch
```

## Run on Windows

```bash
program
```

or:

```bash
.\program.exe
```

## Run on Linux / macOS

```bash
./program
```

---

# 🧪 Example

A typical standalone program may look like:

```cpp
#include <iostream>
using namespace std;

int main() {

    int n;

    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements: ";

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Algorithm

    return 0;
}
```

The exact input and output format depends on the individual problem.

---

# 📊 Complexity Analysis

Understanding complexity is an important part of my DSA learning process.

I am gradually learning to analyze:

### Time Complexity

Examples:

```text
O(1)
O(log n)
O(n)
O(n log n)
O(n²)
O(2ⁿ)
```

### Space Complexity

Examples:

```text
O(1)
O(n)
O(n²)
```

The goal is not only to get the correct answer but also to understand how efficiently the solution works.

---

# 🎯 Learning Progress

This repository represents an ongoing learning journey.

### Current Areas of Practice

- [x] C++ Fundamentals
- [x] Arrays
- [x] Strings
- [x] Searching
- [x] Sorting
- [x] Recursion
- [x] Basic STL
- [x] Maps and Sets
- [x] Linked Lists
- [x] Stack
- [x] Queue
- [ ] Advanced Trees
- [ ] Advanced Graphs
- [ ] Dynamic Programming
- [ ] Advanced Backtracking
- [ ] Advanced Number Theory
- [ ] Advanced Competitive Programming

These checkboxes represent my learning progress and may change over time.

---

# 🔄 Continuous Improvement

This repository is not considered finished.

As I learn new concepts, I will:

- Add new problems
- Improve older implementations
- Refactor unclear code
- Add complexity analysis
- Improve naming and structure
- Convert platform-specific solutions into standalone programs
- Test existing solutions
- Organize problems by topic
- Add more advanced algorithms

The goal is to continuously improve both my **DSA knowledge** and **coding quality**.

---

# 🗺️ Learning Roadmap

My long-term DSA roadmap is approximately:

```text
C++ Fundamentals
       ↓
Arrays & Strings
       ↓
Searching & Sorting
       ↓
Recursion
       ↓
Backtracking
       ↓
Linked Lists
       ↓
Stacks & Queues
       ↓
Trees
       ↓
Graphs
       ↓
Greedy Algorithms
       ↓
Dynamic Programming
       ↓
Advanced Data Structures
       ↓
Competitive Programming
       ↓
Interview Problem Solving
```

This roadmap will evolve as I gain more experience.

---

# 📈 What I Want to Improve

The main areas I want to strengthen through this repository are:

- Logical thinking
- Problem decomposition
- Algorithm selection
- Time complexity analysis
- Space complexity analysis
- C++ programming
- STL usage
- Recursion
- Data Structures
- Competitive programming
- Interview problem solving

---

# 🎓 Purpose of This Repository

This repository is primarily a **learning and practice repository**.

It is meant to document the progression from learning basic programming concepts to solving increasingly complex algorithmic problems.

The code may not always represent the most optimized solution.

Sometimes a simpler solution is intentionally kept because understanding the basic approach is an important part of the learning process.

Optimization and alternative approaches can be added later as my understanding improves.

---

# 🚀 Future Plans

Some of the planned improvements include:

- [ ] Complete conversion of LeetCode-style solutions
- [ ] Add time and space complexity to solutions
- [ ] Improve folder organization
- [ ] Add more tree problems
- [ ] Add more graph algorithms
- [ ] Strengthen Dynamic Programming
- [ ] Add advanced recursion and backtracking problems
- [ ] Add competitive programming problems
- [ ] Improve documentation
- [ ] Add alternative approaches where useful
- [ ] Regularly revisit older problems

---

# 📌 Repository Status

**Status:** 🚧 Actively Learning & Updating

This repository is continuously updated as I learn and practice new concepts.

Older code may be refactored and improved over time.

---

# 👨‍💻 About Me

**Sameer Ramteke**

B.Tech Information Technology Student

Currently learning and practicing:

```text
C++
Data Structures
Algorithms
Problem Solving
Competitive Programming
Software Development
```

This repository is a record of my progress in becoming a better programmer and problem solver.

---

# ⭐ Final Note

> **Don't just memorize the solution. Understand the pattern behind it.**

Every problem in this repository is part of the learning process.

The goal is to move from:

```text
"How do I solve this problem?"
```

to:

```text
"What pattern does this problem represent?"
```

and eventually:

```text
"Can I recognize and solve a new problem using the same idea?"
```

---

**Started:** September 2025  
**Language:** C++  
**Focus:** Data Structures, Algorithms & Problem Solving  
**Status:** Continuously Learning 🚀
