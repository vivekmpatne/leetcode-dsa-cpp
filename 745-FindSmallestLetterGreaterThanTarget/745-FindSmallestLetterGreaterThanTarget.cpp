// Last updated: 4/16/2026, 12:05:16 AM
class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        auto it = upper_bound(letters.begin(), letters.end(), target);
        return (it == letters.end()) ? letters[0] : *it;
    }
};