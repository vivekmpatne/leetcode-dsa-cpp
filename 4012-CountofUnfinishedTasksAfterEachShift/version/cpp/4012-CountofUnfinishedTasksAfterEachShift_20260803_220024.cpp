// Last updated: 8/3/2026, 10:00:24 PM
1class Solution {
2public:
3    vector<int> countTasks(vector<int>& tasks, vector<int>& shifts) {
4        vector<long long> p;
5        long long s = 0;
6        for (int a : tasks) {
7            s += a;
8            p.push_back(s);
9        }
10        long long d = 0;
11        vector<int> res;
12        int n = tasks.size();
13        for (int t : shifts) {
14            if (d + t >= s) {
15                res.push_back(0);
16                d = 0;
17            } else {
18                d += t;
19                auto it = upper_bound(p.begin(), p.end(), d);
20                res.push_back(n - distance(p.begin(), it));
21            }
22        }
23        return res;
24    }
25};