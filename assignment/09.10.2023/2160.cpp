class Solution {
public:
    int minimumSum(int num) {
        string s=to_string(num);
        sort(s.begin(),s.end());
        string s1="";
        string s2="";
        s1.push_back(s[0]);
        s1.push_back(s[2]);
        s2.push_back(s[1]);
        s2.push_back(s[3]);
        return stoi(s1)+stoi(s2);
        // return 0;
    }
};