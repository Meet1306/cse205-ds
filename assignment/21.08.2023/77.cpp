class Solution {
public:

    void solve(int n,int k,vector<vector<int>>& ans,vector<int>& out,int index ){
            if(out.size()==k){
                ans.push_back(out);
                return;
            }
            if(index>n){
                return;
            }
            out.push_back(index);
            solve(n,k,ans,out,index+1);
            out.pop_back();
            solve(n,k,ans,out,index+1);
    }


    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> out;
        solve(n,k,ans,out,1);
        return ans;
    }
};