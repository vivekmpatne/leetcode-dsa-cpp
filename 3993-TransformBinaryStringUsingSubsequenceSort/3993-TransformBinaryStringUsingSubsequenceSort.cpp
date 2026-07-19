// Last updated: 7/19/2026, 9:37:45 AM

#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<bool> transformStr(string s, vector<string>& strs) {
        string vel = s;
        int n = vel.length();
        int total_s_1 = std::count(vel.begin(), vel.end(), '1');
        vector<bool> ans;
        for(const string& pattern : strs ){
            int fixed_1 = count(pattern.begin(), pattern.end(), '1');
            int q_count = count(pattern.begin(), pattern.end(), '?');

            int needed_1 = total_s_1 - fixed_1;
            if( needed_1 < 0 || needed_1 > q_count){
                ans.push_back(false);
                continue;
            }

            string t = pattern;
            int ones_placed = 0;
            for(int i=n-1; i>=0; --i){
                if(t[i] == '?'){
                    if(ones_placed < needed_1){
                        t[i] = '1';
                        ones_placed++;
                    }else{
                        t[i] = '0';
                    }
                }
            }

            int s_ones = 0;
            int t_ones = 0;
            bool possible = true;

            for(int i=0; i< n; i++){
                if(vel[i] == '1') s_ones++;
                if(t[i] == '1') t_ones++;
                if(s_ones < t_ones){
                    possible = false;
                    break;
                }
            }
            ans.push_back(possible);
        }
        return ans;
    }
};