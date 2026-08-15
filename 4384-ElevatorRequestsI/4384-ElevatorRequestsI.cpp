// Last updated: 8/16/2026, 1:56:03 AM
class Solution {
public:
    int elevatorRequests(int n, vector<int>& req) {

        int total_time = 0;
        int curr_floor = 0;

        for(int floor : req){
            total_time += abs(floor - curr_floor);
            curr_floor = floor;
        }

        return total_time;
    }
};