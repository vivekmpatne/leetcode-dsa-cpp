// Last updated: 7/11/2026, 2:29:13 PM
class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        if (nums.empty()) return false; 
        
        int n = nums.size();
        
        if ( n%2 == 0) return false;
        if ( n == 1) return true; 

        int midIdx = (n/2);
        int midEle = nums[midIdx];

        for(int i=0; i<n; i++){
            if ( i == midIdx ){
                continue;
            }
            if(nums[i] == midEle ){
                return false;
            }
        }

        return true;


    }
};