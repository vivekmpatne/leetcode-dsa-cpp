// Last updated: 4/20/2026, 7:18:09 PM
class Solution {
public:
    int maxDistance(vector<int>& colors) {
        
        int n = colors.size();
        int res = 0;
        
        // greedy approch 
        for(int i=0; i<n; i++){
            if(colors[i] != colors[0]){
                res = max(res, i);
            }

            if(colors[i] != colors[n-1]){
                res = max(res, (n-1) - i);
            }
        }

        return res;
    }
};