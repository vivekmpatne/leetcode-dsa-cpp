# 3982. Sum of Integers with Maximum Digit Range

**Difficulty:** Easy  
[View on LeetCode](https://leetcode.com/problems/sum-of-integers-with-maximum-digit-range/)

---

You are given an integer array `nums`.

The **digit range** of an integer is defined as the difference between its **largest** digit and **smallest** digit.

For example, the digit range of 5724 is `7 - 2 = 5`.

Return the sum of all integers in `nums` whose **digit range** is equal to the **maximum digit range** among all integers in the array.

**Example 1:**

**Input:** nums = [5724,111,350]

**Output:** 6074

**Explanation:**

<table border="1" bordercolor="#ccc" cellpadding="5" cellspacing="0" style="border-collapse:collapse;">
	<tbody>
		<tr>
			<th style="text-align:center;"><code>i</code></th>
			<th style="text-align:center;"><code>nums[i]</code></th>
			<th style="text-align:center;">Largest</th>
			<th style="text-align:center;">Smallest</th>
			<th style="text-align:center;">Digit Range</th>
		</tr>
		<tr>
			<td style="text-align:center;">0</td>
			<td style="text-align:center;">5724</td>
			<td style="text-align:center;">7</td>
			<td style="text-align:center;">2</td>
			<td style="text-align:center;">5</td>
		</tr>
		<tr>
			<td style="text-align:center;">1</td>
			<td style="text-align:center;">111</td>
			<td style="text-align:center;">1</td>
			<td style="text-align:center;">1</td>
			<td style="text-align:center;">0</td>
		</tr>
		<tr>
			<td style="text-align:center;">2</td>
			<td style="text-align:center;">350</td>
			<td style="text-align:center;">5</td>
			<td style="text-align:center;">0</td>
			<td style="text-align:center;">5</td>
		</tr>
	</tbody>
</table>

The maximum digit range is 5. The integers with this digit range are 5724 and 350, so the answer is `5724 + 350 = 6074`.

**Example 2:**

**Input:** nums = [90,900]

**Output:** 990

**Explanation:**

<table border="1" bordercolor="#ccc" cellpadding="5" cellspacing="0" style="border-collapse:collapse;">
	<tbody>
		<tr>
			<th style="text-align:center;"><code>i</code></th>
			<th style="text-align:center;"><code>nums[i]</code></th>
			<th style="text-align:center;">Largest</th>
			<th style="text-align:center;">Smallest</th>
			<th style="text-align:center;">Digit Range</th>
		</tr>
		<tr>
			<td style="text-align:center;">0</td>
			<td style="text-align:center;">90</td>
			<td style="text-align:center;">9</td>
			<td style="text-align:center;">0</td>
			<td style="text-align:center;">9</td>
		</tr>
		<tr>
			<td style="text-align:center;">1</td>
			<td style="text-align:center;">900</td>
			<td style="text-align:center;">9</td>
			<td style="text-align:center;">0</td>
			<td style="text-align:center;">9</td>
		</tr>
	</tbody>
</table>

The maximum digit range is 9. Both integers have this digit range, so the answer is `90 + 900 = 990`.

**Constraints:**

- `1 <= nums.length <= 100`
- `10 <= nums[i] <= 10^5`
