// Last updated: 4/16/2026, 12:05:09 AM
class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
         unordered_map<char, int> minFrqOverAll;

         for(char ch = 'a'; ch<= 'z'; ch++){
            minFrqOverAll[ch] = 1000;
         }

        for(auto word : words){
            unordered_map<char, int> freq;
            
            for(auto ch : word){
                freq[ch]++;
            }

            for(char ch = 'a'; ch<='z'; ch++){
                minFrqOverAll[ch] = min(minFrqOverAll[ch], freq[ch]);

            }

           
        }
        vector<string> ans;
            for(char ch = 'a'; ch <= 'z'; ch++){
                while(minFrqOverAll[ch] > 0){
                    ans.push_back(string(1,ch));
                    minFrqOverAll[ch]--;
                }
            }
    return ans;
    }
};