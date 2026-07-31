# 3997. Count Dominant Nodes in a Binary Tree

**Difficulty:** Medium  
[View on LeetCode](https://leetcode.com/problems/count-dominant-nodes-in-a-binary-tree/)

---

You are given the `root` of a complete binary tree.

A node `x` is called **dominant** if its value is equal to the maximum value among all nodes in the subtree rooted at `x`.

Return the number of dominant nodes in the tree.

**Example 1:**

![image](https://assets.leetcode.com/uploads/2026/06/13/tnew.png)

**Input:** root = [5,3,8,2,4,7,1]

**Output:** 5

**Explanation:**

- The leaf nodes with values 2, 4, 7, and 1 are dominant.
- The node with value 8 is dominant because its value is the maximum value in its subtree `[8, 7, 1]`.
- Thus, the answer is 5.

**Example 2:**

![image](https://assets.leetcode.com/uploads/2026/06/15/t9.png)

**Input:** root = [1,2,3,1,2]

**Output:** 4

**Explanation:**

- The leaf nodes with values 1, 2, and 3 are dominant.
- The node with value 2 whose subtree is `[2, 1, 2]` is dominant because its value is the maximum value in its subtree.
- Thus, the answer is 4.

**Constraints:**

- The number of nodes in the tree is in the range `[1, 10^5]`.
- `1 <= Node.val <= 10^9`
- The tree is guaranteed to be a complete binary tree.
