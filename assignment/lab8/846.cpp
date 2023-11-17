class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        map<int,int> mp;
        for(auto i:hand)    mp[i]++;
        for(auto &i:mp){
            int f=i.first;
            int s=i.second;
            if(s>0){
                for(int j=0;j<groupSize;j++){
                    if(mp[f+j]>=s){
                        mp[f+j]-=s;
                    }
                    else    return 0;
                }
            }
        }
        return 1;
    }
};