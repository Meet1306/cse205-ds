class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int sm,mx=INT_MIN;
        for(auto &i:accounts){
            sm=0;
            for(auto &j:i){
                sm+=j;
            }
            mx=max(mx,sm);
        }
        return mx;
    }
};