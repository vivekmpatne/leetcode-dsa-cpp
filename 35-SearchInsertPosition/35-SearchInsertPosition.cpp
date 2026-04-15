// Last updated: 4/16/2026, 12:05:58 AM
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
    
    // binary search 
    int n = nums.size();
    int left = 0, right = n -1;
   
    while( left <= right){
        int mid = (left + right) / 2;
        if(nums[mid] == target ){
            return mid;
        }else if(nums[mid] < target){
            left = mid + 1;
        }else{
            right = mid - 1;
        }
    }
    return left;

    // brute force
    //     int n = nums.size();
    //     int cnt = 0;
    //     for( int i = 0; i<n; i++){
    //         if(nums[i] < target){
    //            cnt++;
    //         }
        
    //     }
    //    return cnt;
    }
};