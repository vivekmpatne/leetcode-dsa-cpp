// Last updated: 4/16/2026, 12:06:01 AM
class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        // optimal BS
        int n = nums.size();
        int l=0, r = n-1;

        while( l <= r ){
            int mid = ( l + r )/2;

            if( nums[mid] == target) return mid;

            if(nums[mid] >= nums[0]){ // 1st inc seq
                if( target > nums[mid] || target < nums[0] ) { 
                    l = mid + 1;
                } else{
                    r = mid - 1;
                }
            } 
            
            else{
                if( target < nums[mid] || target > nums[n-1]){
                    r = mid - 1;
                } else{
                    l = mid + 1;
                }
            }
        }
        return -1;;

        //int n = nums.size();
        // for(int i=0; i<n; i++){
        //     if(nums[i] == target ) return i;
        // }
        // return -1;
    }
};