// Last updated: 7/28/2026, 10:43:56 AM
class Solution {
public:
    string smallestPalindrome(string s) {
        int n = s.length();
        int pivot = (n/2);
        sort(s.begin(), s.begin() + pivot);
        sort(s.end() - pivot, s.end());
        reverse(s.end() - pivot, s.end());

        return s;
    }
};