// Last updated: 4/16/2026, 12:00:34 AM
class Solution {
public:
    string trafficSignal(int timer) {
        
        string sig = "";
        if( timer == 0 ) {
            sig = "Green";
        }else if( timer == 30 ){
            sig = "Orange";
        }else if(timer > 30 && timer <= 90){
            sig = "Red";
        }else{
            sig = "Invalid";
        }

        return sig;
    }
};