// Last updated: 8/2/2026, 3:08:23 AM
class Solution {
public:
    int countValidPrefixes(string s) {
        int cnt0 = 0;
        int cnt1 = 0;
        int validCnt = 0;

        for(char c : s){
            if(c == '0'){
                cnt0++;
            }else{
                cnt1++;
            }
            if( abs(cnt0 - cnt1) <= 1) {
                validCnt++;
            }
        }

        return validCnt;
    }
};