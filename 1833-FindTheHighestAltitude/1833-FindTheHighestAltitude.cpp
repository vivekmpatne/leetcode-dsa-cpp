// Last updated: 6/19/2026, 8:27:33 PM
class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int max_height = 0;
        int curr_height = 0;
        int n = gain.size();

        for(int i=0; i<n; i++){
            curr_height += gain[i];
            if ( curr_height > max_height ){
                max_height = curr_height;
            }
        }

        return max_height;
    }
};