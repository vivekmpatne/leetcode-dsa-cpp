// Last updated: 7/24/2026, 12:38:23 AM
1class Solution {
2public:
3    int firstUniqChar(string s) {
4
5        // second approc 
6        unordered_map<char, int> freq;
7        int idx = 0;
8
9        for(int i=0; i<s.size(); i++){
10            freq[s[i]]++;
11            if( freq[s[idx]] > 1 ){ 
12                idx++;
13                while( idx < s.size() && freq[s[idx]] > 1) idx++;
14            }
15            if(idx == s.size()) return -1;
16        }
17        return idx;
18
19        // first approch 
20        // unordered_map<char, int> freq;
21        // for(auto ch : s){
22        //     freq[ch]++;
23        // }
24        // for(int i=0; i<s.size(); i++){
25        //    if( freq[s[i]] == 1  ) return i;
26        // }
27        // return -1;
28    }
29
30};