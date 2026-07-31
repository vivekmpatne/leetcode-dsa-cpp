# 3921. Score Validator

**Difficulty:** Easy  
[View on LeetCode](https://leetcode.com/problems/score-validator/)

---

You are given a string array `events`.

Initially, `score = 0` and `counter = 0`. Each element in `events` is one of the following:

- `"0"`, `"1"`, `"2"`, `"3"`, `"4"`, `"6"`: Add that value to the total score.
- `"W"`: Increase the counter by 1. No score is added.
- `"WD"`: Add 1 to the total score.
- `"NB"`: Add 1 to the total score.

Process the array from left to right. Stop processing when either:

- All elements in `events` have been processed, or
- The counter becomes 10.

Return an integer array `[score, counter]`, where:

- `score` is the final total score.
- `counter` is the final counter value.

**Example 1:**

**Input:** events = ["1","4","W","6","WD"]

**Output:** [12,1]

**Explanation:**

<table>
	<tbody>
		<tr>
			<th>Event</th>
			<th>Score</th>
			<th>Counter</th>
		</tr>
		<tr>
			<td><code>&quot;1&quot;</code></td>
			<td>1</td>
			<td>0</td>
		</tr>
		<tr>
			<td><code>&quot;4&quot;</code></td>
			<td>5</td>
			<td>0</td>
		</tr>
		<tr>
			<td><code>&quot;W&quot;</code></td>
			<td>5</td>
			<td>1</td>
		</tr>
		<tr>
			<td><code>&quot;6&quot;</code></td>
			<td>11</td>
			<td>1</td>
		</tr>
		<tr>
			<td><code>&quot;WD&quot;</code></td>
			<td>12</td>
			<td>1</td>
		</tr>
	</tbody>
</table>

Final result: `[12, 1]`.

**Example 2:**

**Input:** events = ["WD","NB","0","4","4"]

**Output:** [10,0]

**Explanation:**

<table>
	<tbody>
		<tr>
			<th>Event</th>
			<th>Score</th>
			<th>Counter</th>
		</tr>
		<tr>
			<td><code>&quot;WD&quot;</code></td>
			<td>1</td>
			<td>0</td>
		</tr>
		<tr>
			<td><code>&quot;NB&quot;</code></td>
			<td>2</td>
			<td>0</td>
		</tr>
		<tr>
			<td><code>&quot;0&quot;</code></td>
			<td>2</td>
			<td>0</td>
		</tr>
		<tr>
			<td><code>&quot;4&quot;</code></td>
			<td>6</td>
			<td>0</td>
		</tr>
		<tr>
			<td><code>&quot;4&quot;</code></td>
			<td>10</td>
			<td>0</td>
		</tr>
	</tbody>
</table>

Final result: `[10, 0]`.

**Example 3:**

**Input:** events = ["W","W","W","W","W","W","W","W","W","W","W"]

**Output:** [0,10]

**Explanation:**

After 10 occurrences of `"W"`, the counter reaches 10, so processing stops. The remaining events are ignored.

**Constraints:**

- `1 <= events.length <= 1000`
- `events[i]` is one of `"0"`, `"1"`, `"2"`, `"3"`, `"4"`, `"6"`, `"W"`, `"WD"`, or `"NB"`.
