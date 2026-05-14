// Last updated: 5/14/2026, 9:26:40 PM
class Solution {
public:
    bool isGood(vector<int>& nums) {

        // optimal using hash map
        int len = nums.size();
        int max_val = len - 1;

        unordered_map<int, int> freq;
        for( auto num : nums){
            freq[num]++;
        }
        
        for(int i=1; i< max_val; i++) if(freq[i] != 1) return false;
            
        if(freq[max_val] == 2) return true;
        
        return false;
        

        // brute force 
        // int len = nums.size();
        // int n = len - 1;
        
        // bool flag = true;

        // for(int i=1; i<=n - 1; i++){
        //     int count = 0;
        //     for(int j=0; j < len ; j++){
        //         if(nums[j] == i){
        //             count++;
        //         }
        //     }
        //     if(count != 1){
        //         return false;
        //     }
        // }

        // int nCnt = 0;
        // for(int i=0; i<len; i++){
        //     if(nums[i] == n){
        //         nCnt++;
        //     }
        // }

        // if(nCnt == 2 && flag == true ){
        //     return true;
        // }

        // return false;
    }
};