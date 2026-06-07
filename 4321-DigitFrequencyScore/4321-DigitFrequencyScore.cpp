// Last updated: 6/7/2026, 2:35:02 PM
class Solution {
public:
    int digitFrequencyScore(int n) {
    
    // optimal 
    vector<int> freq(10, 0);
    int sum = 0;

    while( n > 0){
        freq[n % 10]++;
        n /= 10;
    }

    for(int d = 0; d<=9; d++){
        sum += d * freq[d];
    }

    return sum;


    // brute 
    //     int temp = n;
    //     int sum = 0;

    //     unordered_map<int,int> freq;

    //     while(temp>0){
    //         int dig = temp%10;
    //         freq[dig]++;
    //         temp /= 10;   
    //     }
    //     for(auto const& p : freq){
    //         sum += p.first * p.second;
    //     }

    //     return sum;

    }
};