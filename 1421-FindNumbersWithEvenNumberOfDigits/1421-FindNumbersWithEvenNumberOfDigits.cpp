// Last updated: 4/16/2026, 12:05:03 AM
class Solution {
public:
    int findNumbers(vector<int>& nums) {
     
      int cnt = 0;
      int n = nums.size();
        

      for(int i=0; i<n; i++){
        
        int digits = 0;

        int num = nums[i];
          while(num > 0){
             num = num / 10;
             digits++;  
          }
          if(digits%2 == 0) cnt++;
      }

        return cnt;      

    }
};