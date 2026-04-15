// Last updated: 4/16/2026, 12:05:39 AM
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;
        int n = s.length();
        int m = t.length();

        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        return s==t;

        // map<char, int> counts;
        
        // for(int i=0; i<n; i++){
        //     counts[s[i]]++;
        //     counts[t[i]]--;
        // }

        // for(auto it : counts ){
        //     if( it.second != 0 ) return false;
        // }
        
        // return true;
    }
};