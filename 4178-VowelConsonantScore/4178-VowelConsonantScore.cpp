// Last updated: 4/16/2026, 12:00:52 AM
class Solution {
public:
    int vowelConsonantScore(string s) {
        set<char> st = {'a', 'e', 'i', 'o', 'u'};
        int v = 0, c = 0;
        for(auto x : s){
			if(st.count(x)) v++;
            else if( x >= 'a' && x <= 'z') c++;
        }
        return c?v/c:0;
    }
};