class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        for(auto i:stones)  pq.push(i);
        while(pq.size()>1){
            int g=pq.top();
            pq.pop();
            int s=pq.top();
            pq.pop();
            if(g==s){
                continue;
            }
            pq.push(g-s);
        }
        if(!pq.size())  return 0;
        return pq.top();
    }
};