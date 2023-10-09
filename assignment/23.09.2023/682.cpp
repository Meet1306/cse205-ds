class Solution {
public:
    int calPoints(vector<string>& operations) {
        int sm=0;
        stack<int> st;
        for(int i=0;i<operations.size();i++){
            if(operations[i]=="+"){
                int temp=st.top();
                st.pop();
                int s=temp+st.top();
                st.push(temp);
                st.push(s);
                sm+=s;
            }
            else if(operations[i]=="D"){
                sm+=(st.top()*2);
                st.push(st.top()*2);
            }

            else if(operations[i]=="C"){
                sm-=st.top();
                st.pop();
            }
            else{
                st.push(stoi(operations[i]));
                sm+=st.top();
            }
        }
        return sm;
    }
};