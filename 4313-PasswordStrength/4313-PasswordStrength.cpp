// Last updated: 5/24/2026, 11:42:48 AM
class Solution {
public:
    int passwordStrength(string password) {
        string temp = password;
        int strength = 0;

        unordered_set<char> seen;

        for(char c : temp){
            if(seen.find(c) == seen.end()){
                if(c >= 'a' && c <= 'z'){
                    strength += 1;
                }else if( c >= 'A' && c  <= 'Z'){
                    strength += 2;
                }else if( c >= '0' && c <= '9'){
                    strength += 3;
                }else if(c == '!' || c == '@' || c == '#' || c == '$'){
                    strength += 5;
                }
                seen.insert(c);
            }
        }

        return strength;
    }
};