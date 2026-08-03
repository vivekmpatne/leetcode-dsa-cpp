// Last updated: 8/3/2026, 10:13:06 PM
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds; 
#define ll long long
using ordered_set =  tree<pair<ll, ll>, null_type, less_equal<pair<ll, ll>>, rb_tree_tag, tree_order_statistics_node_update>; 

class Solution {
public:
    long long countRatioSubarrays(vector<int>& nums, int a, int b) {
        
        ordered_set os; 
        int n = nums.size(); 
        ll ans = 0; 
        int odd = 0, even = 0; 
       
        os.insert({0, -1}); 
        
        for(int i = 0; i < n; i++) {
            if(nums[i] % 2) odd++; 
            else even++; 
            ll v = (ll)b * even - (ll)a * odd; 
            ll cnt = os.order_of_key({v, -2}); 
            ans += os.size() - cnt; 
            os.insert({v, i}); 
        }

        return ans; 
        
    }
};