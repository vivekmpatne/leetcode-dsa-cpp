// Last updated: 4/16/2026, 12:05:11 AM
class Solution {
public:
    int fib(int n) {
        
        if( n<=1 ) return n;

        int a = 0, b = 1;
        for(int i=2; i<=n; i++){
            int temp = a + b;
            a = b;
            b = temp;
        }

        return b;


    //    if(n <= 1) return n;
    //    return fib(n-1) + fib(n-2);
    }
};