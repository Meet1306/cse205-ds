class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int> o;
        int index;
        for(int i=0;i<nums1.size();i++){
            bool f=0;
            auto it = find(nums2.begin(), nums2.end(), nums1[i]);
            index = it - nums2.begin();
            for(int j=index;j<nums2.size();j++){
                if(nums2[j]>nums2[index]){
                    o.push_back(nums2[j]);
                    f=1;
                    break;
                }
            }
            if(f)
                continue;
            o.push_back(-1);
        }
        return o;
    }
};