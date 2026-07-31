// Last updated: 8/1/2026, 1:25:23 AM
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {


        // optimal ( kinda two pointer approch), Its BST
        int rows = matrix.size();
        int cols = matrix[0].size();

        int row = 0, col = cols - 1;

        // row = i, col = j 
        while ( row < rows && col > -1 ){
            int curr = matrix[row][col];
            if ( curr == target ) return true;
            if ( target > curr ) row++;
            else col--;
        }
        return false;

        // brute force 
        // int m = matrix.size();
        // int n = matrix[0].size();

        // for(int i=0; i<m; i++){
        //     for(int j=0; j<n; j++){
        //         if(matrix[i][j] == target ){
        //             return true;
        //         }
        //     }
        // }

        // return false;
    }
};