// Last updated: 4/16/2026, 12:05:17 AM
class Solution {
public:
    bool judgeCircle(string moves) {

        // optimal 
        int x = 0, y =0;
        for( char move : moves){
            switch(move){
                case 'U' : y++; break;
                case 'D' : y--; break;
                case 'R' : x++; break;
                case 'L' : x--; break;
            }
        }

        return x == 0 && y == 0;

        // brute
        // int U = 0, D = 0;
        // int R = 0, L = 0;

        // int size  = moves.length();

        // for(int i=0; i<size; i++){
        //     if(moves[i] == 'U') U++;
        //     else if(moves[i] == 'D') D++;
        //     else if(moves[i] == 'R') R++;
        //     else{
        //         L++;
        //     }
        // }

        // return ( U == D ) && ( L == R );
    }
};