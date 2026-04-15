// Last updated: 4/16/2026, 12:01:00 AM
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;


class Solution {
public:
    long long minDamage(int power, vector<int>& damage, vector<int>& health) {
        int n = damage.size();

        vector<pair<double, int>> threat(n);

        for(int i=0; i<n; i++){
            double time_to_kill = ceil( (double)health[i] / power );
            threat[i] = { time_to_kill / damage[i] ,i};
        }

        sort(threat.begin(), threat.end());

        ll totalDamage = 0;
        ll cumulativeDamage = accumulate(damage.begin(), damage.end(), 0LL);

        for( int i=0; i<n; i++){
            int idx = threat[i].second;
            int time_to_kill = ceil( (double)health[idx] / power );

            totalDamage += cumulativeDamage * time_to_kill;

            cumulativeDamage -= damage[idx];
            
        }

        return totalDamage;
    }
};