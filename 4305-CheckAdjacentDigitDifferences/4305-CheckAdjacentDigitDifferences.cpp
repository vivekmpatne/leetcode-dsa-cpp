// Last updated: 5/17/2026, 1:48:55 PM
class Solution {
public:
    bool isAdjacentDiffAtMostTwo(string s) {
        vector<int> arr;

        for(char c : s){
            arr.push_back(c - '0');
        }

        int n = arr.size();
        
        
        
        int maxi  = 0;
        for(int j=1; j<n; j++){
            int diff = abs(arr[j] - arr[j-1]);
            maxi = max(maxi, diff);
        }

        if( maxi <= 2){
            return true;
        }else{
           return false;
        }
    }
};