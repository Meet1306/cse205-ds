class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> mp;
        vector<pair<int,int>> vp;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto &i : mp){
            vp.push_back({i.second,i.first});
        }
        cout<<endl;
        sort(vp.rbegin(),vp.rend());
        int i=0;
        while(i!=k){
            ans.push_back(vp[i].second);
            i++;
        }
        return ans;
    }
};