// Last updated: 5/3/2026, 5:51:46 PM
class Solution {
public:

    int rev(int num){
        int rev = 0;
        while(num > 0){
            int lastDig = num%10;
            rev = rev*10 + lastDig;
            num /= 10;
        }
        return rev;
    }

    bool isPrime(int num){
        if( num <= 1) return false;
        for(int i=2; i*i<=num; i++){
            if(num%i == 0){
                return false;
            }
        }
        return true;
    }

    int sumOfPrimesInRange(int n) {
        int st = min(n, rev(n));
        int end = max(n, rev(n));
        int sum = 0;

        for(int i=st; i<=end; i++){
            if(isPrime(i)){
                sum += i;
            }
        }


        return sum;
    }
};