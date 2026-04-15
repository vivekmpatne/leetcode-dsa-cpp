// Last updated: 4/16/2026, 12:05:27 AM
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        
        // now optimized using binary search 
        int n = nums.size();
        int l = 0, r = n - 1;

        while( l < r){ // l <= r not good. edge case fale
            int mid = ( l+r )/2;

            if( nums[mid] == nums[(mid^1)]){
                l = mid + 1;
            }
            else{
                r = mid;
            }
        }
        // here l == r ( single value)
        return nums[r]; // nums[r]; also give same


        // using hash map
        // int n = nums.size();
        // unordered_map<int, int> freq;
        // for(int num : nums){
        //     freq[num]++;
        // }
        // for(int x : nums){
        //     if(freq[x] == 1) return x;
        // }
        // return -1;
        
        // using bit wise oper. brute force. 
        // int n = nums.size();
        // int ans = 0;
        // for(int num : nums){
        //     ans ^= num;
        // }
        // return ans;
        
    }
};