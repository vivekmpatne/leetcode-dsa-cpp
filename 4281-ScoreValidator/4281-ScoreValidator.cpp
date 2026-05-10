// Last updated: 5/10/2026, 10:54:38 PM
class Solution {
public:
    vector<int> scoreValidator(vector<string>& events) {
        vector<int> ans;
        int len = events.size();
        int score = 0; int counter = 0;

        for(int i=0; i<len; i++){
            if(counter == 10){
                break;
            }
            else if(events[i] == "1"){
                score += 1;
            }else if(events[i] == "2"){
                score += 2;
            }else if(events[i] == "3"){
                score += 3;
            }else if(events[i] == "4"){
                score += 4;
            }else if(events[i] == "5"){
                score += 5;
            }else if(events[i] == "6"){
                score += 6;
            }else if(events[i] == "W"){
                counter += 1;
            }else if(events[i] == "WD"){
                score += 1;
            }else if(events[i] == "NB"){
                score += 1;
            }
        }
        ans.push_back(score);
        ans.push_back(counter);

        return ans;
    }
};