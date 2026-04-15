// Last updated: 4/16/2026, 12:05:13 AM
class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int row = matrix.size();
        if( row == 0 ) return {};
        int col = matrix[0].size();


        std::vector<std::vector<int>> transMatrix(col, std::vector<int>(row));

        for(int i=0; i<row; ++i ){
            for(int j=0; j<col; ++j){
               transMatrix[j][i] =  matrix[i][j];
            }
        }

        return transMatrix;
    }
};