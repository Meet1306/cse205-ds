class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        bool f=0;
        int cnt = 1;
        int mx = 1;
        
        for (int i = 1; i < nums.size(); i++)
        {      
            if (nums[i] == 1 && nums[i] == nums[i - 1])
            {
                f=1;
                ++cnt;
                continue;
            }
            // cout << cnt << endl;

            mx = max(mx, cnt);
            cnt = 1;
        }
        if(f==0 ){
            if(nums.size()>1 && nums[1]!=nums[0]){
                return 1;
            }
            else
            return nums[0];
        }
        mx = max(mx, cnt);
        return mx;
    }
};