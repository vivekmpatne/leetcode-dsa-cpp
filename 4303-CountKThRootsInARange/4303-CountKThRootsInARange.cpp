// Last updated: 5/17/2026, 1:48:53 PM
class Solution {
public:
    int countKthRoots(int l, int r, int k) {
        long long cnt = 0;

        if(k==1) return (r-l+1);

        if( 0 >= l && 0<= r) cnt++;
        if( 1 >= l && 1 <= r) cnt++;
        
        for(long long j=2; ; j++){
            long long val = 1;
            bool overflow = false;

            for(int p=0; p<k; p++){
                if(val> r/j ){
                    overflow = true;
                    break;
                }
                val *= j;
            }

            if( overflow || val > r) break;
            if( val >= l) cnt++;
            
        }

        return (int)cnt;
    }
};