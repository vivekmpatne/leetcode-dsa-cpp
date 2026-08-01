// Last updated: 8/2/2026, 3:08:34 AM
class Solution {
public:
    long long minInitialStrength(vector<int>& monsters, vector<vector<int>>& boosts) {
        int n=monsters.size();
        vector<long long> diff(n+1,0);

        for(auto &b:boosts){
            int l=b[0],r=b[1];
            long long v=b[2];

            diff[l]+=v;
            diff[r+1]-=v;
        }
        vector<long long>bonus(n);
        long long cur=0;
        for(int i=0;i<n;i++){
            cur+=diff[i];
            bonus[i]=cur;
            
        }
        long long need=0;
        for(int i=n-1;i>=0;i--){
            if(need==0)
                need=max(0LL,(long long)monsters[i]-bonus[i]);
            else
                need+=monsters[i];
        }
        return need;
    }
};