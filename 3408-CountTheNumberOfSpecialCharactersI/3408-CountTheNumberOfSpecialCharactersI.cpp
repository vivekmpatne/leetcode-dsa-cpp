// Last updated: 5/26/2026, 8:37:53 AM
class Solution {
public:
    int numberOfSpecialChars(string word) {

        //better frq array
        vector<bool> lower(26, false), upper(26, false);

        for(char c : word){
            if(islower(c)) lower[c - 'a'] = true;
            else upper[c-'A'] = true;
        }
        int cnt = 0;
        for(int i=0; i<26; i++){
            if(lower[i] && upper[i]) cnt++;
        }
        return cnt;
        // brute
        // int cnt = 0;
        // for(char c = 'a'; c<= 'z'; c++){
        //     bool hasLower = false, hasUpper = false;
        //     for(char ch : word){
        //         if(ch == c) hasLower = true;
        //         if(ch == toupper(c)) hasUpper = true;
        //     }
        //     if(hasLower && hasUpper) cnt++;
        // }

        // return cnt;
    }
};