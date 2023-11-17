class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n=score.size();
        vector<int> dup(score);
        sort(score.rbegin(),score.rend());
        map<int,string> mp;
        if(n>0)   mp[score[0]]="Gold Medal";
        if(n>1) mp[score[1]]="Silver Medal";
        if(n>2) mp[score[2]]="Bronze Medal";
        for(int i=3;i<n;i++){
            mp[score[i]]=to_string(i+1);
        }
        vector<string> ans;
        for(int i=0;i<n;i++){
            ans.push_back(mp[dup[i]]);
        }
        return ans;
    }
};