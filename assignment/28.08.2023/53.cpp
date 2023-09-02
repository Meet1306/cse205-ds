class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int mx = INT_MIN;
        int mxi=INT_MIN;
        int sum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
            if (sum < 0)
            {
                sum = 0;
            }
            mx = max(mx, sum);
            mxi=max(mxi,nums[i]);
        }
        bool f;
        if(mx==0){
            for(int i=0;i<nums.size();i++){
                if(nums[i]>0){
                    f=0;
                    break;
                }
                else
                    f=1;
            }
        }
        if(f){
            return mxi;
        }
        return mx ;
    }
};