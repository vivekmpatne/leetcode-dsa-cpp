// Last updated: 4/16/2026, 12:06:00 AM
class Solution {
public:

    int firstOcc( vector<int> &nums, int n, int target){
        int l=0, r = n-1;
        int fo = -1;

        while(l <= r){
            int mid = (l + r)/2;
            if(nums[mid] < target) l = mid+1;
            else if( nums[mid] > target) r = mid - 1;
            else{
                fo = mid;
                r = mid - 1;
            }
        }
        return fo;
    }

    int lastOcc(vector<int> &nums, int n, int target){
        int l=0, r = n-1;
        int lo = -1;

        while( l <= r ){
            int mid = ( l + r )/2;
            if(nums[mid] < target ) l = mid + 1;
            else if(nums[mid] > target) r = mid - 1;
            else{
                lo = mid;
                l = mid + 1;
            }
        }

        return lo;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int fo = firstOcc(nums, n, target);
        int lo = lastOcc(nums, n, target);
        return {fo, lo};
    }
};