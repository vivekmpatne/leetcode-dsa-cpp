// Last updated: 4/16/2026, 12:05:32 AM
class Solution {
public:
    int firstUniqChar(string s) {

        // second approc 
        unordered_map<char, int> freq;
        int idx = 0;

        for(int i=0; i<s.size(); i++){
            freq[s[i]]++;
            if( freq[s[idx]] > 1 ){ 
                idx++;
                while( idx < s.size() && freq[s[idx]] > 1) idx++;
            }
            if(idx == s.size()) return -1;
        }
        return idx;

        // first approch 
        // unordered_map<char, int> freq;
        // for(auto ch : s){
        //     freq[ch]++;
        // }
        // for(int i=0; i<s.size(); i++){
        //    if( freq[s[i]] == 1  ) return i;
        // }
        // return -1;
    }

};