class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int c = 1;
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] != c)
            {
                c++;
                i--;
                k--;
                if (k == 0)
                {
                    break;
                }
            }
            else
                c++;
        }
        --c;
        // cout << c << endl;
        while (k != 0)
        {
            ++c;
            --k;
        }
        return c;
        }
};