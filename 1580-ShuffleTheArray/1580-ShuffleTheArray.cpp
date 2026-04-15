// Last updated: 4/16/2026, 12:05:01 AM
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {  

        // optimal no extra space for store array
        int BASE = 1001;
        int size = 2*n;

        for(int i=0; i<size; ++i){
            long long newVal;
            if(i%2 == 0) newVal = nums[i/2]%BASE;
            else  newVal = nums[n + (i/2)]%BASE; 

            nums[i] = nums[i] + newVal*BASE;
        }   
        for(int i=0; i<size; ++i){
            nums[i] /= BASE;
        }
        return nums;

        // better
        // vector<int> ans(2*n);
        // for(int i=0; i<n; ++i){
        //     ans[2*i] = nums[i];
        //     ans[2*i+1] = nums[i+n];
        // }
        // return ans;
        

        //brute  
        // vector<int> ans(2*n);
        // int left = 0, right = n, idx = 0;
        // while(left<n){
        //     ans[idx] = nums[left];
        //     ans[idx+1] = nums[right];
        //     left++, right++;
        //     idx += 2;
        // }
        // return ans;
    }
};