class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int,int> mp;
        vector<int> a;
        for(int i=0;i<arr1.size();i++)  mp[arr1[i]]++;
        for(int i=0;i<arr2.size();i++){
            for(int j=0;j<mp[arr2[i]];j++){
                a.push_back(arr2[i]);
            }
        }
        map<int,int> mp1;
        for(int i=0;i<arr2.size();i++){
            mp1[arr2[i]]++;
        }
        sort(arr1.begin(),arr1.end());
        for(int i=0;i<arr1.size();i++){
            if(mp1[arr1[i]]==0){
                a.push_back(arr1[i]);
            }
        }
        return a;
    }
};