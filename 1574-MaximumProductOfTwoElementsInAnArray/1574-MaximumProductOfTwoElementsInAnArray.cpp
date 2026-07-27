// Last updated: 7/27/2026, 2:03:08 PM
class Solution {
public:
    int maxProduct(vector<int>& nums) {
       int max1, max2;

       for( int num : nums){
         if ( num > max1 ){
            max2 = max1;
            max1 = num;
         } else if ( num > max2 ){
            max2 = num;
         }
       }

       return (max1 - 1)*( max2 - 1);
    }
};