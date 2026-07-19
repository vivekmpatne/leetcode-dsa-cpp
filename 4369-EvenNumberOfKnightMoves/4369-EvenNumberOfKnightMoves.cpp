// Last updated: 7/19/2026, 9:37:24 AM
class Solution {
public:
    bool canReach(vector<int>& start, vector<int>& target) {
        return (start[0] + start[1])%2 == (target[0] + target[1])%2;
    }
};