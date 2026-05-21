// Last updated: 5/21/2026, 8:35:52 PM
class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        unordered_set<int> prefixes;

        for(int val : arr1){
            while( val > 0 ){
                prefixes.insert(val);
                val /= 10;
            }
        }

        int maxLength = 0;

        for(int val : arr2 ){
            while(val > 0){
                if(prefixes.count(val)){
                    string s = to_string(val);
                    maxLength = max(maxLength, (int)s.length());
                    break;
                }
                val /= 10;
            }
        }

        return maxLength;
        
    }
};