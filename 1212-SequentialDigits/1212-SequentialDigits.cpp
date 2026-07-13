// Last updated: 7/13/2026, 7:09:45 AM
class Solution {
public: // optimal 
    vector<int> sequentialDigits(int low, int high){
        vector<int> ans;
        string digits = "123456789";

        for(int len = 2; len <= 9; len++){
            for(int start = 0; start <= 9 - len; start++){
                string sub = digits.substr(start, len);
                int num = stoi(sub);

                if( num >= low && num <= high){
                    ans.push_back(num);
                }

            }
        }

        return ans;
    }   

};

// brute force 

// class Solution {

// private:

//     bool isSeq (int num){
//         int temp = abs(num);
        
//         if ( temp < 10 ){
//             return true;
//         }
//         int lstDig = temp%10;
//         temp = temp/10;
//         int secLstDig = temp%10;

//         int diff = lstDig - secLstDig;

//         if( (diff) != 1 ){
//             return false;
//         }
//         while ( temp >= 10 ){
//             lstDig = temp%10;
//             temp /= 10;
//             secLstDig = temp%10;

//             if( (lstDig - secLstDig) != diff){
//                 return false;
//             }

//         }
//         return true;
//     }

// public:
//     vector<int> sequentialDigits(int low, int high) {
//         vector<int> ans;

//         for( int i = low; i<= high; i++){
//             if( isSeq(i) == true ){
//                 ans.push_back(i);
//             }

//         }


//         return ans;
//     }
// };