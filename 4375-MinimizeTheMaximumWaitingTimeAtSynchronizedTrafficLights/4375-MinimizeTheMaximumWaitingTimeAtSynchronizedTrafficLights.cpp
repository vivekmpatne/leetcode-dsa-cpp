// Last updated: 8/16/2026, 9:31:53 AM
class Solution {
public:
    int minPenalty(int period, vector<int>& lights, vector<int>& arrivalTime) {
        long long x = period;

        int max_g = 0;
        for( int g : lights){
            max_g = max(max_g, g);
        }
        int low = 0;
        int high = period;
        int ans = period;

        while( low <= high){
            int mid = ( high + low) / 2;
            bool possible = true;
            for(int time : arrivalTime){
                int r = time % period;
                if(r >= max_g && r < period - mid){
                    possible = false;
                    break;
                }
            }
            if(possible){
                ans = mid;
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        return ans;
    }
};