// Last updated: 7/19/2026, 9:37:21 AM
class Solution {
public:
    string rearrangeString(string s, char x, char y) {
        string part_y = "";
        string part_x = "";
        string part_other = "";

        for(char ch : s){
            if( ch == y){
                part_y += ch;
            }else if( ch == x){
                part_x += ch;
            }else{
                part_other += ch;
            }
        }

        return part_y + part_x + part_other;
    }
};