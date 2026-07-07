// Last updated: 7/7/2026, 11:21:21 AM
class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int maxCnt = 0;
        int n = costs.size();

        sort(costs.begin(), costs.end());
        
        vector<long long> preFix(n); 
        
        preFix[0] = costs[0];

        for(int i=1; i<n; i++){
            preFix[i] = preFix[i-1] + costs[i];
        }

        for(int i=0; i<n; i++){
            if( preFix[i] <= coins ){
                maxCnt = i+1;
            }
            else{
                break; 
            }
        }

        return maxCnt;
    }
};