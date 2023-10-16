class Solution {
public:
    string frequencySort(string s) {
        map<int,int> mp;
        for(auto &i:s)  mp[i]++;
        priority_queue<pair<int,char>> pq;
        for(auto &i:mp) pq.push({i.second,i.first});
        string ans;
        while(!pq.empty()){
            auto x=pq.top();
            string s1(x.first,x.second);
            ans+=s1;
            pq.pop();
        }
        return ans;
    }
};