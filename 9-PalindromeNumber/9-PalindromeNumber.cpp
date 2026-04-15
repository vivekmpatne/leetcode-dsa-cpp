// Last updated: 4/16/2026, 12:01:33 AM
class Solution {
public:
    bool isPalindrome(int x) {
        int copy = x;
        long long revNum = 0;
       
        while(x>0){
        int  last_digit = x%10;
        revNum = (revNum*10) + last_digit;
        x /= 10;
        }
        return (revNum==copy)? true : false;
    }
};