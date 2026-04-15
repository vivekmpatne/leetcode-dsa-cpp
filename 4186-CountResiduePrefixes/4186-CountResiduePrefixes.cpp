// Last updated: 4/16/2026, 12:00:47 AM
class Solution {
public:
    int residuePrefixes(string s) {
        vector<int> freq(26, 0);
        int dist = 0;
        int ans = 0;
        
        for(int i=0; i<s.size(); ++i){
           int idx = s[i] - 'a';
            if(freq[idx] == 0){
                dist++;
            }
            freq[idx]++;
            int len = i+1;
            if(dist == len%3) ans++;
        }
        return ans;
    }
};