// Last updated: 4/16/2026, 12:05:43 AM
class Solution {
public:
    int hammingWeight(int n) {
        string bin = bitset<32>(n).to_string();
        int cntOne = 0;
        for( int i=0; i<bin.length(); i++){
            if(bin[i] == '1'){
                cntOne++;
            }
        }

        return cntOne;
    }
};