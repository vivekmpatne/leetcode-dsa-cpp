// Last updated: 8/16/2026, 9:31:51 AM
class Solution {
public:
    int nearestDrone(vector<vector<int>>& drones, vector<int>& target) {
        int tx = target[0];
        int ty = target[1];
        int best_index = -1;
        int min_dist = INT_MAX;

        int n = drones.size();
        
        for(int i=0; i<n; i++ ){
            int x = drones[i][0];
            int y = drones[i][1];
            int r = drones[i][2];

            int dist = abs(x - tx) + abs(y - ty);

            if(dist <= r){
                if(dist < min_dist){
                    min_dist = dist;
                    best_index = i;
                }
            }
        }

        return best_index;
    }
};