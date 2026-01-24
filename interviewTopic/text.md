# Data Structures and Algorithms (DSA) Interview Roadmap

This document serves as a comprehensive guide for technical interview preparation, covering essential topics and classic problems.

---

## 1. Arrays and Strings
### Array Manipulation
* **Maximum/Minimum:** Find the max/min element in an array.
* **Reverse/Rotate:** Reverse an array or rotate it by `k` steps.
* **Move Zeros:** Move all zeros to the end while maintaining order.
* **Kadane’s Algorithm:** Find the maximum subarray sum.

### String Manipulation
* **Palindrome:** Check if a string reads the same backward.
* **Anagrams:** Check if two strings are anagrams of each other.
* **Non-repeating Character:** Find the first unique character.
* **Compression:** Convert "aaabbc" to "a3b2c1".
* **Longest Substring:** Find the longest substring without repeating characters.

---

## 2. Linked Lists
* **Reverse:** Reverse a singly linked list (Iterative & Recursive).
* **Cycle Detection:** Floyd’s Cycle-finding algorithm (Tortoise and Hare).
* **Merge Sorted Lists:** Combine two sorted lists into one.
* **Middle Element:** Find the middle node in one pass.
* **N-th node from end:** Remove or find the $n^{th}$ node from the tail.

---

## 3. Stacks and Queues
### Stacks
* **Valid Parentheses:** Use a stack to check for balanced brackets `()[]{}`.
* **Next Greater Element:** Find the first greater element to the right.
* **Expression Evaluation:** Postfix and Prefix evaluation.

### Queues
* **Implement Queue using Stacks:** Using two stacks to simulate FIFO.
* **Circular Queue:** Implementation using an array.
* **Sliding Window Maximum:** Find the max in every window of size `k`.

---

## 4. Trees (Binary Trees and BST)


### Binary Tree Problems
* **Traversals:** Preorder, Inorder, Postorder, and Level Order (BFS).
* **Height & Diameter:** Calculate the maximum depth and longest path.
* **LCA:** Find the Lowest Common Ancestor.

### Binary Search Tree (BST)
* **Validation:** Check if a tree is a valid BST.
* **K-th Smallest:** Find the $k^{th}$ smallest element in a BST.
* **Search/Insert/Delete:** Basic BST operations.

---

## 5. Heaps (Priority Queues)
* **Min/Max Heap:** Implementation from scratch.
* **Heap Sort:** Sorting an array using a heap.
* **K-th Largest Element:** Using a Min-Heap of size `k`.
* **Merge K Sorted Lists:** Efficiently merging multiple sorted arrays/lists.

---

## 6. Graphs


### Traversals
* **BFS:** Shortest path in unweighted graphs.
* **DFS:** Pathfinding and exhaustive search.

### Algorithms
* **Dijkstra’s:** Shortest path in weighted graphs with non-negative weights.
* **Bellman-Ford:** Shortest path with negative weights.
* **Topological Sort:** For Directed Acyclic Graphs (DAG).
* **Cycle Detection:** In both directed and undirected graphs.

---

## 7. Dynamic Programming (DP)
* **0/1 Knapsack:** Classic optimization problem.
* **LCS:** Longest Common Subsequence.
* **LIS:** Longest Increasing Subsequence.
* **Coin Change:** Minimum coins needed to make a sum.
* **Edit Distance:** Minimum operations to convert one string to another.

---

## 8. Backtracking
* **N-Queens:** Placing $N$ queens on a chessboard.
* **Sudoku Solver:** Solving a 9x9 grid.
* **Permutations/Combinations:** Generating all possible arrangements.
* **Subset Sum:** Finding subsets that add up to a target.

---

## 9. Bit Manipulation
* **Set Bits:** Count the number of 1s in binary representation.
* **Power of Two:** Check if $n$ is a power of 2 using `(n & (n-1)) == 0`.
* **Single Number:** Find the element that appears once (using XOR).

---

## 10. Sorting and Searching
* **Quick Sort:** Partition-based sorting.
* **Merge Sort:** Divide and conquer stable sort.
* **Binary Search:** Searching in $O(\log n)$ on sorted data.
* **Search in Rotated Array:** Modified binary search for shifted arrays.

---

## 11. Sliding Window
* **Fixed Window:** Maximum sum of subarray of size $k$.
* **Variable Window:** Smallest subarray with a sum $\ge S$.
* **String Windows:** Find all anagrams in a string.