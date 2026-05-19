// Last updated: 5/19/2026, 9:17:31 PM
class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {

    // optimal two ptr
    int i = 0, j = 0;
    int n1 = nums1.size();
    int n2 = nums2.size();

    while ( i < n1 && j < n2){
        if(nums1[i] == nums2[j]){
            return nums1[i];
        }else if(nums1[i] < nums2[j]){
            i++;
        }else{
            j++;
        }

    }

    return -1;

    // brute force ( not works ( 10^5 ))   
    //     int minComn = INT_MAX;

    //     int n1 = nums1.size();
    //     int n2 = nums2.size();
        
    //    for(int i=0; i<n1; i++){     
    //         for(int j=0; j<n2; j++){
    //             if( nums1[i] == nums2[j] ){
    //                 minComn = min(minComn, nums1[i]);
    //             }
    //         }
    //     }


    //     return (minComn == INT_MAX) ? -1 : minComn;

    }
};