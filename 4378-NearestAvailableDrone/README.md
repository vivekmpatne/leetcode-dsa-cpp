# 4024. Nearest Available Drone

**Difficulty:** Easy  
[View on LeetCode](https://leetcode.com/problems/nearest-available-drone/)

---

You are given a 2D integer array `drones`, where `drones[i] = [x_i, y_i, range_i]` represents the x-coordinate, y-coordinate, and travel range of the `i^th` drone.

You are also given an integer array `target = [tx, ty]`, representing the coordinates of the target.

A drone `drones[i]` can reach the target if the **Manhattan distance** between its coordinates and the target coordinates is **less than or equal** to its `range_i`.

Return the **index** of the reachable drone with the **minimum Manhattan distance** to the target. If there is a tie, return the **smallest index**. If no drone can reach the target, return -1.

The **Manhattan distance** between two coordinates `(x_i, y_i)` and `(x_j, y_j)` is `|x_i - x_j| + |y_i - y_j|`.

**Example 1:**

**Input:** drones = [[0,0,8],[2,2,9]], target = [3,4]

**Output:** 1

**Explanation:**

- The distance between `drones[0]` and `target` is `|0 - 3| + |0 - 4| = 7`, which is within its range of 8.
- The distance between `drones[1]` and `target` is `|2 - 3| + |2 - 4| = 3`, which is within its range of 9.
- Since `drones[1]` is the nearest drone, the answer is 1.

**Example 2:**

**Input:** drones = [[2,1,5],[4,4,5],[6,6,8]], target = [5,5]

**Output:** 1

**Explanation:**

- The distance between `drones[0]` and `target` is `|2 - 5| + |1 - 5| = 7`, which is greater than its range of 5.
- The distance between `drones[1]` and `target` is `|4 - 5| + |4 - 5| = 2`, which is within its range of 5.
- The distance between `drones[2]` and `target` is `|6 - 5| + |6 - 5| = 2`, which is within its range of 8.
- Both `drones[1]` and `drones[2]` are the nearest drones. Since we should return the smallest index, the answer is 1.

**Example 3:**

**Input:** drones = [[4,4,5]], target = [8,6]

**Output:** -1

**Explanation:**

- The distance between `drones[0]` and `target` is `|4 - 8| + |4 - 6| = 6`, which is greater than its range of 5.
- No drone can reach the target, so the answer is -1.

**Constraints:**

- `1 <= drones.length <= 100`
- `drones[i] = [x_i, y_i, range_i]`
- `target = [tx, ty]`
- `-25 <= x_i, y_i, tx, ty <= 25`
- `1 <= range_i <= 100`
