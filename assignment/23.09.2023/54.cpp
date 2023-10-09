class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<int> a;
        int left=0,right=n-1;
        int top=0,bottom=m-1;
        while(left<=right && top<=bottom){
            for(int i=left;i<=right;i++){
                a.push_back(matrix[top][i]);
            }
            top++;

            for(int i=top;i<=bottom;i++){
                a.push_back(matrix[i][right]);
            }
            right--;

            if(top<=bottom){
                for(int i=right;i>=left;i--){
                    a.push_back(matrix[bottom][i]);
                }
                bottom--;
            }

            if(left<=right){
                for(int i=bottom;i>=top;i--){
                    a.push_back(matrix[i][left]);
                }
                left++;
            }
        }
        return a;
    }
};