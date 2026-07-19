// Last updated: 7/19/2026, 9:35:23 AM
1class Solution {
2public:
3    string smallestSubsequence(string s) {
4        vector<int> vis(26), num(26);
5        for (char ch : s) {
6            num[ch - 'a']++;
7        }
8
9        string stk;
10        for (char ch : s) {
11            if (!vis[ch - 'a']) {
12                while (!stk.empty() && stk.back() > ch) {
13                    if (num[stk.back() - 'a'] > 0) {
14                        vis[stk.back() - 'a'] = 0;
15                        stk.pop_back();
16                    } else {
17                        break;
18                    }
19                }
20                vis[ch - 'a'] = 1;
21                stk.push_back(ch);
22            }
23            num[ch - 'a'] -= 1;
24        }
25        return stk;
26    }
27};