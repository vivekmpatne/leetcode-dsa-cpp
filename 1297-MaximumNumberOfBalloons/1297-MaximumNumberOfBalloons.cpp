// Last updated: 7/7/2026, 11:21:30 AM
class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int Cnt = 0;
        bool check = false;

        int bCnt = 0, aCnt = 0, lCnt = 0, oCnt = 0, nCnt = 0;

        int len = text.length();

        for(int i=0; i<len; i++){
            if(text[i] == 'a'){
                aCnt++;
            }else if(text[i] == 'b' ){
                bCnt++;
            } else if(text[i] == 'l' ){
                lCnt++;
            }
            else if(text[i] == 'o' ){
                oCnt++;
            } else if(text[i] == 'n'){
                nCnt++;
            }
        }

        int llCnt = 0; llCnt = lCnt/2;
        int ooCnt = 0; ooCnt = oCnt/2;

        // for(int i=1; i<1500; i++){
        //     if(  (aCnt == bCnt == llCnt == ooCnt == nCnt ) == i ){
        //         Cnt++;
        //     }
        // }

        return min({aCnt, bCnt, llCnt, ooCnt, nCnt});
    }
};