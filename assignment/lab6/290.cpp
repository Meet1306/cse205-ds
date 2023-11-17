class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> str;
        string t;
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                str.push_back(t);
                t="";
                continue;
            }
            t.push_back(s[i]);
            if(i==s.size()-1)   str.push_back(t);
        }

        if(pattern.size()!=str.size())    return 0;
        map<char,string> mp;
        map<string,char> mp1;
        for(int i=0;i<str.size();i++){
            if(mp.count(pattern[i]) && mp[pattern[i]]!=str[i])  return false;
            if(mp1.count(str[i]) && mp1[str[i]]!=pattern[i])  return false;
            mp[pattern[i]]=str[i];
            mp1[str[i]]=pattern[i];
        }
        return 1;
    }
};