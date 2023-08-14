class Solution {
public:
    void reverse(vector<char> &s, int i)
    {
        int n = s.size();
        if (i == n / 2)
            return;
        
        swap(s[n - i - 1], s[i]);
        reverse(s, i + 1);
    }
    void reverseString(vector<char>& s) {

        reverse(s, 0);
        for (int i = 0; i < s.size(); i++)
        {
            cout << s[i] << " ";
        }
        
    }
};