// Last updated: 5/24/2026, 11:43:00 AM
class Solution {
public:
    int minOperations(vector<int>& nums) {
       int n = nums.size();
        if( n <= 1) return 0;

        bool type1 = true;
        int k1 = nums[0];
        for(int i=0; i<n; i++){
            if(nums[i] != (k1 + i) % n){
                type1 = false;
                break;
            }
        }

        if(type1){
            if(k1 == 0) return 0;
            return min(n - k1, k1 + 2);
        }

        bool type2 = true;
        int base = nums[0];
        for(int i=0; i<n; i++){
            if(nums[i] != (base - i + n) % n ){
                type2 = false;
                break;
            }
        }

        if(type2){
            int k = (base + 1)%n;
            return min( k+1, n - k + 1);
        }

        return -1;
    }
};