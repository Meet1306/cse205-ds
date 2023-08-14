class Solution {
public:

    void subset(vector<int> nums,vector<vector<int>> &ans,vector<int> demo,int idx){
        if(idx>=nums.size()){
            ans.push_back(demo);
            return;
        }

        subset(nums,ans,demo,idx+1);
        demo.push_back(nums[idx]);
        subset(nums,ans,demo,idx+1);

    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int> demo;
        int idx=0;
        subset(nums,ans,demo,idx);
        return ans;
        
    }
};