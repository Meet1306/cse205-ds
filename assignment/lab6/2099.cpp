class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        vector<pair<int,int>> a;
        vector<pair<int,int>> b;
        for(int i=0;i<nums.size();i++){
            a.push_back({nums[i],i});
        }
        sort(a.rbegin(),a.rend());
        for(int i=0;i<k;i++){
            b.push_back({a[i].second,a[i].first});
        }
        sort(b.begin(),b.end());
        vector<int> ans;
        for(auto i:b)   ans.push_back(i.second);
        return ans;
    }
};