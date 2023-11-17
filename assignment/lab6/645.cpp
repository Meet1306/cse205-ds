class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> a;
        map<int,int> mp;
        for(auto i:nums){
            mp[i]++;
            if(mp[i]>1) {
                a.push_back(i);
            }
        }

        for(int i=1;i<=nums.size();i++){
            if(!mp.count(i)){
                a.push_back(i);
                break;
            }
        }
        return a;
    }
};