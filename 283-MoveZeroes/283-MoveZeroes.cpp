// Last updated: 4/16/2026, 12:05:35 AM
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();

            int idx = 0;
            for(int i=0; i<n; i++){
                if(nums[i] != 0 ){
                    nums[idx++] = nums[i];
                }
            }

            while(idx < n ){
                nums[idx++ ] = 0;
            }

            // int j = 0;
            // for(int i=0; i<n; ++i){
            //     if(nums[i] != 0){
            //         int temp = nums[i];
            //         nums[i] = nums[j];
            //         nums[j] = temp;
            //         j++;
            //     }
            // }
        

        //vector<int> arr(n); int j=0;
        // int j = 0;
        // for(int i=0; i<n; ++i){
        //     if(nums[i] != 0){
        //         nums[j] = nums[i]; 
        //         j++;
        //     }
        // }
        // for(int i=j; i<nums.size(); ++i){
        //     nums[i] = 0;
        // }
        
    }
};