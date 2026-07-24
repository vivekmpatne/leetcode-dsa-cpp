// Last updated: 7/24/2026, 9:17:52 PM
class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {

        unordered_set<int> one, two, three;

        for( int x : nums){
            one.insert(x);

            vector<int> a(one.begin(), one.end());
            for(int y : a){
             two.insert( y ^ x); 
            }

            vector<int> b(two.begin(), two.end());
            for( int y : b ){
                three.insert( y ^ x );
            }
        }

        return three.size();

        // int n = nums.size();
        // unordered_set<int> st;
        // for ( int i=0; i<n; i++ ){
        //     for( int  j = i; j<n; j++){
        //         for ( int k = j; k < n; k++ ){
        //             st.insert(nums[i] ^ nums[j] ^ nums[k]);
        //         }
        //     }
        // }
        // return st.size();
    }
};