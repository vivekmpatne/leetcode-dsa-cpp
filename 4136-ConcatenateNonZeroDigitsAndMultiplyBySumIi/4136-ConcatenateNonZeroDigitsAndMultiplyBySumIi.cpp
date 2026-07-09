// Last updated: 7/9/2026, 11:08:30 AM
class Solution {
public:
    vector<int> sumAndMultiply(string s, vector<vector<int>>& queries) {
        
        // optimization prefix sum
        int n = s.length();
        long long MOD = 1000000007;

        vector<long long> power10(n+1, 1);
        for(int i=1; i <= n; i++){
            power10[i] = (power10[i - 1] * 10) % MOD;
        }

        vector<long long> prefix_sum(n+1, 0);
        vector<long long> prefix_x(n+1, 0);
        vector<int> non_zero_count(n+1, 0);

        for(int i=0; i < n; i++){
            int digit = s[i] - '0';

            if( digit > 0 ){
                prefix_sum[i+1] = prefix_sum[i] + digit;
                prefix_x[i+1] = (prefix_x[i] * 10 + digit) % MOD;
                non_zero_count[i+1] = non_zero_count[i] + 1;
            } else{
                prefix_sum[i+1] = prefix_sum[i];
                prefix_x[i+1] = prefix_x[i];
                non_zero_count[i+1] = non_zero_count[i];
            }
        }

        vector<int> ans;
        int qLen = queries.size();

        for( int i = 0; i < qLen; i++){
            int L = queries[i][0];
            int R = queries[i][1];

            int start = L;
            int end = R + 1;

            long long sum = prefix_sum[end] - prefix_sum[start];

            int digits_in_range = non_zero_count[end] - non_zero_count[start];

            long long shift = (prefix_x[start] * power10[digits_in_range]) % MOD;
            long long x = (prefix_x[end] - shift + MOD ) % MOD;

            long long xSum = ( x * (sum % MOD) ) % MOD;

            ans.push_back(static_cast<int>(xSum));
        }

        return ans;



        
        // brute force 

        // vector<int> ans;
        // int  qLen = queries.size();
        // int strLen = s.length();   
        // long long MOD = 1000000007;

        // for(int i=0; i < qLen; i++){

        //     long long x = 0, sum = 0;
        //     long long multi = 1;

        //     int s_start, s_end;


        //     s_start = queries[i][0];
        //     s_end = queries[i][1];

        //     std::string sub = s.substr(s_start, ( s_end - s_start) + 1 ); 

        //     long long sumNum = std::stoll(sub);
        //     long long temp = sumNum;

        //     while ( temp > 0 ){
        //     long long lstDig = temp%10;
            
        //     if(lstDig > 0){
        //         x = ( lstDig * multi ) + x;
        //         multi *= 10;
        //         sum += lstDig;
        //     }

        //     temp /= 10;

        //     }
        //     long long xSum =  (x * sum )%MOD ;
        //     ans.push_back(xSum);
        // }

        // return ans;
    }
};