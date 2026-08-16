// Last updated: 8/16/2026, 9:37:02 AM
class Solution {
public:
    bool stoneGameIX(vector<int>& stones) {
        int cnt[3] = {0, 0, 0};
        for( int s : stones){
            cnt[ s % 3]++;
        }
        if( cnt[1] == 0 && cnt[2] == 0) return false;

        if( cnt[0] % 2 == 0){
            return min(cnt[1], cnt[2]) > 0;
        }

        return abs(cnt[1] - cnt[2]) > 2;
    }
};