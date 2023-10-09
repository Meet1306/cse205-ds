class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++){
            map<char ,int> mp;
            for(int j=0;j<9;j++){
                mp[board[i][j]]++;
                if(mp[board[i][j]]>1 && board[i][j]!='.')
                    return 0;
            }
        }

        for(int i=0;i<9;i++){
            map<char ,int> mp;
            for(int j=0;j<9;j++){
                mp[board[j][i]]++;
                if(mp[board[j][i]]>1 && board[j][i]!='.')
                    return 0;
            }
        }

        for(int i=0;i<9;i+=3){
            for(int j=0;j<9;j+=3){
                map<char,int> mp;
                for(int ii=i;ii<i+3;ii++){
                    for(int jj=j;jj<j+3;jj++){
                        mp[board[ii][jj]]++;
                        if(mp[board[ii][jj]]>1 && board[ii][jj]!='.'){
                            return 0;
                        }
                    }
                }
            }
        }
        return 1;
    }
};