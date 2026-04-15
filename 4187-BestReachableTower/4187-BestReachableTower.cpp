// Last updated: 4/16/2026, 12:00:45 AM
class Solution {
public:
    vector<int> bestTower(vector<vector<int>>& towers, vector<int>& center, int radius) {
        int cx = center[0];
        int cy = center[1];

        int bestQul = -1;
        int bestX = -1, bestY = -1;

        for(auto &t : towers){
            int x = t[0];
            int y = t[1];
            int q = t[2];

            int dist = abs(x - cx) + abs(y - cy);

            if( dist <= radius ){
                if( q > bestQul) {
                    bestQul = q;
                    bestX  = x;
                    bestY = y;
                    
                }else if( q ==  bestQul ){
                    if ( bestX == -1 || x < bestX || (x== bestX && y < bestY) ){
                        bestX = x;
                        bestY = y;
                    }
                }
            }
            
        }
        if (bestQul == -1 ) return {-1, -1};
        return {bestX, bestY};
    }
};