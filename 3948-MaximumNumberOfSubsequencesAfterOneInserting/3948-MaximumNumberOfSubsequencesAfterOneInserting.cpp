// Last updated: 4/16/2026, 12:00:57 AM
class Solution {
public:
    long long numOfSubsequences(string s) {
        int n = s.size();
        vector<long long> preL(n+1, 0), preLC(n+1, 0);
        long long l =0, lc = 0;
        long long cntLCT = 0;
        for(int i=0; i<n; ++i){
            if(s[i] == 'L') {l++;}
            else if(s[i]=='C'){lc += l; }
            else if(s[i]=='T') {cntLCT += lc; }
            preL[i+1] = l;
            preLC[i+1] = lc;
        }

        long long old_ans = cntLCT;
        vector<long long> sufT(n+15, 0), sufCT(n+15, 0);
        long long t = 0, ct = 0;

        for(int i=n-1; i>=0; --i){
            if(s[i] == 'T') { t++; }
            else if(s[i] == 'C'){ct += t; }
            sufT[i+1] = t;
            sufCT[i+1] = ct;
        }

        long long ans1 = sufCT[1] + old_ans;
        long long ans2 = preLC[n] + old_ans;

        long long ans3 = 0;
        for(int i=1; i<=n; ++i){
            ans3 = max(ans3, preL[i]*sufT[i+1]);
        }
        return max({ans1, ans2, ans3 + old_ans});
    }
};