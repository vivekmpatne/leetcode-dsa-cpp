// Last updated: 7/12/2026, 2:39:18 PM
class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n = arr.size();

        if (arr.empty()) return {};
        
        vector<int> sortedArr = arr;

        sort(sortedArr.begin(), sortedArr.end());

        unordered_map<int, int> rankMap;
        int rank = 1;

        for( int num : sortedArr){
            if( rankMap.find(num) == rankMap.end() ){
                rankMap[num] = rank;
                rank++;
            }
        }

        for( int i=0; i< n; i++){
            arr[i] = rankMap[arr[i]];
        }

        return arr;

    }
};