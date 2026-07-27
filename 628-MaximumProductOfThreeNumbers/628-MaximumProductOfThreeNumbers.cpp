// Last updated: 7/27/2026, 2:03:25 PM
class Solution {
public:
    int maximumProduct(vector<int>& nums) {

        // optimal 
        int max1 = INT_MIN, max2 = INT_MIN, max3 = INT_MIN;
        int min1 = INT_MAX, min2 = INT_MAX;

        for(int num : nums ){
            if(num >= max1){
                max3 = max2;
                max2 = max1;
                max1 = num;
            } else if( num >= max2 ){
                max3 = max2;
                max2 = num;
            }else if ( num >= max3 ){
                max3 = num;
            }

            if( num <= min1 ){
                min2 = min1;
                min1 = num;
            }else if( num <= min2 ){
                min2 = num;
            }
        }
        int proDuct1 = max1 * max2 * max3;
        int proDuct2 = min1 * min2 * max1;

        return max(proDuct1, proDuct2);


        // better
        // int n = nums.size();
        // sort(nums.begin(), nums.end());
        // int option1 = nums[n-1]*nums[n-2]*nums[n-3];
        // int option2 = nums[0]*nums[1]*nums[n-1];
        // return max(option1, option2);
    }
};