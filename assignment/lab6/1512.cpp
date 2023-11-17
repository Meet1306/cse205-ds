class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        map<int,int> mp;
        int sm=0;
        for(auto i:nums)    mp[i]++;
        for(auto i:mp){
            sm+=(i.second)*((i.second)-1)/2;
        }
        return sm;
    }
};