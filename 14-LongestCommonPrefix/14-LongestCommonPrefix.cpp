// Last updated: 7/13/2026, 7:11:17 AM
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        
        if ( strs.empty() ) return "";

        for(int i=0; i< strs[0].length(); i++){
            char currChar = strs[0][i];

            for(int j=1; j< strs.size(); j++){
                if ( i == strs[j].length() || strs[j][i] != currChar ){
                    return strs[0].substr(0, i);
                }
            }
        }

        return strs[0];
    }
};