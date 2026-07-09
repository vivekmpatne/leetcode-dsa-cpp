// Last updated: 7/9/2026, 11:42:09 AM
class Solution {
public:
    int maxDigitRange(vector<int>& nums) {

        int max_range = -1;
        int sum = 0;

        for(int num : nums){
            int temp = num;

            int large = temp % 10;
            int small = temp % 10;
            temp /= 10;

            while( temp > 0){
                int digit = temp % 10;
                if( digit > large ) large = digit;
                if( digit < small ) small = digit;
                temp /= 10;
            }

            int curr_range = large - small;

            if( curr_range > max_range){
                max_range = curr_range;
                sum = num;
            }else if( curr_range == max_range){
                sum += num;
            }
        }

        return sum;
    }
};