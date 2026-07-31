// Last updated: 7/31/2026, 12:50:44 PM
class Solution {
public:
    int minimumPushes(string word) {

        
        int n = word.length();
        int pushCnt = 0;
        for(int i = 0; i< n; i++){
            pushCnt += i / 8 + 1;
        }
        return pushCnt;

        
        // int n = word.length();
        // int blocks = n / 8;
        // return (blocks * (blocks + 1 ) * 4) + (n%8) * (blocks + 1);
    }
};