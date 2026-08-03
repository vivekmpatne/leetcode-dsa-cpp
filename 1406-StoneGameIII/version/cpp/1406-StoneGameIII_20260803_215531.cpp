// Last updated: 8/3/2026, 9:55:31 PM
1class Solution {
2public:
3    string stoneGameIII(vector<int>& stoneValue) {
4        int n = stoneValue.size();
5        vector<int> dp(n + 1, INT_MIN);
6        dp[n] = 0;
7        for (int i = n - 1; i >= 0; i--) {
8            int take = 0;
9            
10            for (int k = 0; k < 3 && i + k < n; k++) {
11                take += stoneValue[i + k];
12                dp[i] = max(
13                    dp[i],
14                    take - dp[i + k + 1]
15                );
16            }
17        }
18        if (dp[0] > 0)
19            return "Alice";
20        if (dp[0] < 0)
21            return "Bob";
22        return "Tie";
23    }
24};