class Solution {
public:
    void f(vector<vector<int>> &ans,vector<int>v, vector<int>&candidates, int idx, int target, int n, int sum)
    {
        if (sum == target)
        {
            ans.push_back(v);
            return;
        }
        if (idx == n)
        {
            if (sum == target)
                ans.push_back(v);
            return;
        }
        f(ans,v,candidates, idx+1,target,n,sum);
        if (sum < target){
            v.push_back(candidates[idx]);
            f(ans,v, candidates, idx,target,n, sum+candidates[idx]);
        }
    }
    vector<vector<int>> combinationSum(vector<int> &candidates, int target) {
        vector<vector<int>> ans;
        vector<int>v;
        f(ans,v,candidates,0,target,candidates.size(),0);
        return ans;
    }
};