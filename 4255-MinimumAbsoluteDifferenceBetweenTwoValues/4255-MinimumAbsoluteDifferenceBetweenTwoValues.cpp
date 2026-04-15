// Last updated: 4/16/2026, 12:00:42 AM
class Solution {
public:
    int minAbsoluteDifference(vector<int>& nums) {

        int lastOne = -1;
        int lastTwo = -1;
        int minDiff = INT_MAX;

        for(int i=0; i<nums.size(); i++){
            if( nums[i] == 1){
                lastOne = i;
                if( lastTwo != -1 ){
                    minDiff = min(minDiff, abs(lastOne - lastTwo ));
                }
            }
            else if( nums[i] == 2){
                lastTwo = i;
                if( lastOne != -1 ){
                    minDiff = min(minDiff, abs(lastTwo - lastOne ));
                }
            }
        }

        return ( minDiff == INT_MAX ) ?  -1 : minDiff ;
    }
};