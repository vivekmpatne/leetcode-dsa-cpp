// Last updated: 4/16/2026, 12:04:51 AM
class Solution {
public:

    int toMins ( string s ){
        int hrs = stoi(s.substr(0,2));
        int mins = stoi(s.substr(3,2));

        return hrs*60 + mins;
    }
    
    bool haveConflict(vector<string>& event1, vector<string>& event2) {
        int ev1_st = toMins(event1[0]);
        int ev1_end = toMins(event1[1]);

        int ev2_st = toMins(event2[0]);
        int ev2_end = toMins(event2[1]);

        if ( ev1_end < ev2_st || ev2_end < ev1_st){
            return false;
        }
        return true;
    }
};