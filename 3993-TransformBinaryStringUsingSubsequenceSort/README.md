# 3998. Transform Binary String Using Subsequence Sort

**Difficulty:** Medium  
[View on LeetCode](https://leetcode.com/problems/transform-binary-string-using-subsequence-sort/)

---

You are given a binary string `s`.

You are also given an array of strings `strs`, where each `strs[i]` has the **same** length as `s` and consists of characters `'0'`, `'1'`, and `'?'`. Each `'?'` can be replaced by either `'0'` or `'1'`.

You may perform the following operation any number of times (including zero):

- Choose any subsequence `sub` of `s`.
- Sort `sub` in **non-decreasing** order.
- Replace the chosen **subsequence** in `s` with the sorted `sub`, keeping all other characters unchanged.

Return a boolean array `ans`, where `ans[i]` is `true` if it's possible to replace all `'?'` in `strs[i]` with `'0'` or `'1'` and transform `s` into the resulting string using the allowed operation above, otherwise return `false`.

**Example 1:**

**Input:** s = "101", strs = ["1?1","0?1","0?0"]

**Output:** [true,true,false]

**Explanation:**

<table style="border: 1px solid black;">
	<tbody>
		<tr>
			<th style="border: 1px solid black;"><code>i</code></th>
			<th style="border: 1px solid black;"><code>strs[i]</code></th>
			<th style="border: 1px solid black;">Replacement</th>
			<th style="border: 1px solid black;">Result <code>strs[i]</code></th>
			<th style="border: 1px solid black;">Operation(s)</th>
			<th style="border: 1px solid black;">Result</th>
		</tr>
		<tr>
			<td style="border: 1px solid black;">0</td>
			<td style="border: 1px solid black;"><code>&quot;1?1&quot;</code></td>
			<td style="border: 1px solid black;"><code>? &rarr; 0</code></td>
			<td style="border: 1px solid black;"><code>&quot;101&quot;</code></td>
			<td style="border: 1px solid black;">Matches <code>s</code>.</td>
			<td style="border: 1px solid black;"><code>true</code></td>
		</tr>
		<tr>
			<td style="border: 1px solid black;">1</td>
			<td style="border: 1px solid black;"><code>&quot;0?1&quot;</code></td>
			<td style="border: 1px solid black;"><code>? &rarr; 1</code></td>
			<td style="border: 1px solid black;"><code>&quot;011&quot;</code></td>
			<td style="border: 1px solid black;">Select the&nbsp;subsequence at indices <code>[0..2]</code> of <code>s</code> &rarr; <code>&quot;101&quot;</code>.<br />
			Sort <code>&quot;101&quot;</code> to get <code>&quot;011&quot; = strs[i]</code>.</td>
			<td style="border: 1px solid black;"><code>true</code></td>
		</tr>
		<tr>
			<td style="border: 1px solid black;">2</td>
			<td style="border: 1px solid black;"><code>&quot;0?0&quot;</code></td>
			<td style="border: 1px solid black;"><code>? &rarr; 0</code> or <code>1</code></td>
			<td style="border: 1px solid black;"><code>&quot;000&quot;</code> or <code>&quot;010&quot;</code></td>
			<td style="border: 1px solid black;">Not feasible.</td>
			<td style="border: 1px solid black;"><code>false</code></td>
		</tr>
	</tbody>
</table>

Thus, `ans = [true, true, false]`.

**Example 2:**

**Input:** s = "1100", strs = ["0011","11?1","1?1?"]

**Output:** [true,false,true]

**Explanation:**

<table style="border: 1px solid black;">
	<tbody>
		<tr>
			<th style="border: 1px solid black;"><code>i</code></th>
			<th style="border: 1px solid black;"><code>strs[i]</code></th>
			<th style="border: 1px solid black;">Replacement</th>
			<th style="border: 1px solid black;">Result <code>strs[i]</code></th>
			<th style="border: 1px solid black;">Operation(s)</th>
			<th style="border: 1px solid black;">Result</th>
		</tr>
		<tr>
			<td style="border: 1px solid black;">0</td>
			<td style="border: 1px solid black;"><code>&quot;0011&quot;</code></td>
			<td style="border: 1px solid black;">-</td>
			<td style="border: 1px solid black;"><code>&quot;0011&quot;</code></td>
			<td style="border: 1px solid black;">Select the&nbsp;subsequence at indices <code>[0..3]</code> of <code>s</code> &rarr; <code>&quot;1100&quot;</code>.<br />
			Sort <code>&quot;1100&quot;</code> to get <code>&quot;0011&quot; = strs[i]</code>.</td>
			<td style="border: 1px solid black;"><code>true</code></td>
		</tr>
		<tr>
			<td style="border: 1px solid black;">1</td>
			<td style="border: 1px solid black;"><code>&quot;11?1&quot;</code></td>
			<td style="border: 1px solid black;"><code>? &rarr; 0</code></td>
			<td style="border: 1px solid black;"><code>&quot;1101&quot;</code></td>
			<td style="border: 1px solid black;">Not feasible.</td>
			<td style="border: 1px solid black;"><code>false</code></td>
		</tr>
		<tr>
			<td style="border: 1px solid black;">2</td>
			<td style="border: 1px solid black;"><code>&quot;1?1?&quot;</code></td>
			<td style="border: 1px solid black;">First <code>? &rarr; 0</code><br />
			Second <code>? &rarr; 0</code></td>
			<td style="border: 1px solid black;"><code>&quot;1010&quot;</code></td>
			<td style="border: 1px solid black;">Select the&nbsp;subsequence at indices <code>[1, 2]</code> of <code>s</code> &rarr; <code>&quot;10&quot;</code>.<br />
			Sort <code>&quot;10&quot;</code> to get <code>&quot;01&quot;</code>, so <code>s = &quot;1<u>01</u>0&quot;</code>.</td>
			<td style="border: 1px solid black;"><code>true</code></td>
		</tr>
	</tbody>
</table>

Thus, `ans = [true, false, true]`.

**Example 3:**

**Input:** s = "1010", strs = ["0011"]

**Output:** [true]

**Explanation:**

<table style="border: 1px solid black;">
	<tbody>
		<tr>
			<th style="border: 1px solid black;"><code>i</code></th>
			<th style="border: 1px solid black;"><code>strs[i]</code></th>
			<th style="border: 1px solid black;">Replacement</th>
			<th style="border: 1px solid black;">Result <code>strs[i]</code></th>
			<th style="border: 1px solid black;">Operation(s)</th>
			<th style="border: 1px solid black;">Result</th>
		</tr>
		<tr>
			<td style="border: 1px solid black;">0</td>
			<td style="border: 1px solid black;"><code>&quot;0011&quot;</code></td>
			<td style="border: 1px solid black;">-</td>
			<td style="border: 1px solid black;"><code>&quot;0011&quot;</code></td>
			<td style="border: 1px solid black;">Select the&nbsp;subsequence at indices <code>[0, 2, 3]</code> of <code>s</code> &rarr; <code>&quot;110&quot;</code>.<br />
			Sort <code>&quot;110&quot;</code> to get <code>&quot;011&quot;</code>, so <code>s = &quot;0<u>0</u>11&quot; = strs[i]</code>.</td>
			<td style="border: 1px solid black;"><code>true</code></td>
		</tr>
	</tbody>
</table>

Thus, `ans = [true]`.

**Constraints:**

- `1 <= n == s.length <= 2000`
- `s[i]` is either `'0'` or `'1'`.
- `1 <= strs.length <= 2000`
- `strs[i].length == n`
- `strs[i]` is either `'0'`, `'1'`, or `'?'`​​​​​​​.
