// Last updated: 4/17/2026, 9:13:31 PM
class Solution {
public:
    int smallestEvenMultiple(int n) {
       // brute force
        int small = INT_MAX;
        for(int i=1; i<=300; i++){
            
            if(( i%n == 0) && ( i%2 == 0)){
                small = min(i, small);
            }
        }

        return small;

        // optimized 
        // if(n%2 ==  0){
        //     return n;
        // }else{
        //     return n*2;
        // }

    }
};