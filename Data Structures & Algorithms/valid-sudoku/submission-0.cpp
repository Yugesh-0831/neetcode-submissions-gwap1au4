class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        map<int, set<int>> rows;
        map<int, set<int>> cols;
        map<int, set<int>> subMat;
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j] == '.') continue;
                // find it belongs to what submat
                int subM;
                if(i>=0 && i<3){
                    if(j>=3 && j<6) subM = 2;
                    else if(j>=6) subM = 3;
                    else subM = 1;
                }
                else if(i>=3 && i<6){
                    if(j>=3 && j<6) subM = 5;
                    else if(j>=6) subM = 6;
                    else subM = 4;
                }
                else{
                    if(j>=3 && j<6) subM = 8;
                    else if(j>=6) subM = 9;
                    else subM = 7;
                }
                // cout<<i<<" "<<j<<" "<<subM<<" "<<board[i][j]<<endl;
                if(subMat[subM].find(board[i][j]) != subMat[subM].end()) return false;
                else subMat[subM].insert(board[i][j]);
                if(rows[i].find(board[i][j]) != rows[i].end()) return false;
                else rows[i].insert(board[i][j]);
                if(cols[j].find(board[i][j]) != cols[j].end()) return false;
                else cols[j].insert(board[i][j]);
            }
        }
        return true;
    }
};
