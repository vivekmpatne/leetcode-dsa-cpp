// Last updated: 8/3/2026, 9:58:55 PM
1#include <ext/pb_ds/assoc_container.hpp> 
2#include <ext/pb_ds/tree_policy.hpp>
3
4using namespace __gnu_pbds; 
5#define ll long long
6using ordered_set =  tree<pair<ll, ll>, null_type, less_equal<pair<ll, ll>>, rb_tree_tag, tree_order_statistics_node_update>; 
7
8class Solution {
9public:
10    long long countRatioSubarrays(vector<int>& nums, int a, int b) {
11        
12        ordered_set os; 
13        int n = nums.size(); 
14        ll ans = 0; 
15        int odd = 0, even = 0; 
16       
17        os.insert({0, -1}); 
18        
19        for(int i = 0; i < n; i++) {
20            if(nums[i] % 2) odd++; 
21            else even++; 
22            ll v = (ll)b * even - (ll)a * odd; 
23            ll cnt = os.order_of_key({v, -2}); 
24            ans += os.size() - cnt; 
25            os.insert({v, i}); 
26        }
27
28        return ans; 
29        
30    }
31};