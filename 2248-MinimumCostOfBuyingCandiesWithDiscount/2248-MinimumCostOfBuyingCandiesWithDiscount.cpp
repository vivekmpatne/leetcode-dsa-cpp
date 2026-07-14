// Last updated: 7/14/2026, 5:05:34 PM
class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int n = cost.size();
        sort(cost.begin(), cost.end());
        int ans = 0;

        for(int i = n-1; i >= 0; i -= 3){
            ans += cost[i];
            if( i > 0){
                ans += cost[i-1];
            }
        }

        return ans;
    }
};