# 4009. Minimum Possible Maximum Waiting Time

**Difficulty:** Hard  
[View on LeetCode](https://leetcode.com/problems/minimum-possible-maximum-waiting-time/)

---

You are given an integer array `demand`, where `demand[i]` is the amount of fuel required by the `i^th` car.

You are also given an integer array `fuel` of length 2. There are **exactly** two fuel dispensers, numbered 0 and 1, where `fuel[j]` is the initial amount of fuel available in dispenser `j`.

Cars are allowed to start refueling in **increasing** index order. Car 0 becomes allowed at time 0, and for each `i > 0`, car `i` becomes allowed **exactly** when car `i - 1` starts refueling.

The refueling process follows these rules:

- Each dispenser can serve **at most** one car at a time.
- A car may start refueling at any time **at or after** it becomes allowed.
- A car can start on a dispenser only if the dispenser is free and has **at least** `demand[i]` fuel remaining.
- If multiple free dispensers can serve the current car, you may choose **any** of them.
- Refueling a car takes `demand[i]` seconds and reduces the remaining fuel in that dispenser by `demand[i]`.
- Once started, refueling cannot be interrupted.
- When both dispensers are free, if neither has **at least** `demand[i]` fuel remaining, the process terminates and no further cars can be served.

The **waiting time** of a car is the time between when it becomes allowed to start refueling and when it actually starts.

Return the **minimum** possible value of the **maximum** waiting time among all served cars over all assignments that **maximize** the number of served cars. If no car can be served, return -1.

**Example 1:**

**Input:** demand = [6,8,4,6,5], fuel = [16,13]

**Output:** 6

**Explanation:**

<table border="1" bordercolor="#ccc" cellpadding="5" cellspacing="0" style="border-collapse:collapse; text-align:center;">
	<tbody>
		<tr>
			<th>Car</th>
			<th>Becomes allowed at</th>
			<th>Starts refueling at</th>
			<th>Dispenser used</th>
			<th>Remaining fuel before start<br />
			(dispenser 0, dispenser 1)</th>
			<th>Waiting time</th>
		</tr>
		<tr>
			<td>0</td>
			<td>0</td>
			<td>0</td>
			<td>1</td>
			<td>(16, 13)</td>
			<td>0</td>
		</tr>
		<tr>
			<td>1</td>
			<td>0</td>
			<td>0</td>
			<td>0</td>
			<td>(16, 7)</td>
			<td>0</td>
		</tr>
		<tr>
			<td>2</td>
			<td>0</td>
			<td>6</td>
			<td>1</td>
			<td>(8, 7)</td>
			<td>6</td>
		</tr>
		<tr>
			<td>3</td>
			<td>6</td>
			<td>8</td>
			<td>0</td>
			<td>(8, 3)</td>
			<td>2</td>
		</tr>
	</tbody>
</table>

Car 4 becomes allowed at time 8, but when both dispensers are free, their remaining fuel is (2, 3), which is less than `demand[4] = 5`.

Therefore, the process terminates. The maximum waiting time among served cars is 6.

**Example 2:**

**Input:** demand = [10,15], fuel = [12,17]

**Output:** 0

**Explanation:**

- At time 0, Car 0 becomes allowed and starts refuelling using dispenser 0.
- Car 1 becomes allowed at time 0 (when Car 0 starts) and immediately starts refuelling using dispenser 1.
- Both cars start without waiting, so the maximum waiting time is 0.

**Example 3:**

**Input:** demand = [10,5], fuel = [8,8]

**Output:** -1

**Explanation:**

- At time 0, Car 0 becomes allowed. However, neither dispenser has enough fuel to serve it, so the process terminates immediately.
- No car is served, so the answer is -1.

**Constraints:**

- `1 <= demand.length <= 50`
- `1 <= demand[i] <= 20`
- `fuel.length == 2`
- `1 <= fuel[i] <= 50`
