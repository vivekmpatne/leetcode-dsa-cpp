// Last updated: 4/16/2026, 12:05:38 AM
class Solution {
public:
    int addDigits(int num) {

        

        // while( num >= 10){
        //     int sumDig = 0;
        //     while(num > 0){
        //         sumDig += num%10;
        //         num /= 10;
        //     }
        //     num = sumDig;
        // }
        // return num;

        if(num == 0) return 0;

        return 1 + (num-1)%9;

        
        
        
    }
};