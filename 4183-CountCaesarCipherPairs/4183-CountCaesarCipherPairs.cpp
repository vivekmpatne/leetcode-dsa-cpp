// Last updated: 4/16/2026, 12:00:50 AM
class Solution {
public:
    long long countPairs(vector<string>& words) {
        unordered_map<string, long long> mp;
        for(string &s : words){
            int base = s[0] - 'a';
            string key;
            for(char c : s){
                int diff = (c - 'a' - base + 26)%26;
                key += char('a' + diff);
            }
            mp[key]++;
        }
        long long ans = 0;
        for(auto &p : mp){
            long long k = p.second;
            ans += k * (k-1)/2;
        }
        return ans;
    }
};