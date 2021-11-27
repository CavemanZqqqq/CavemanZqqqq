class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int i = 0; i < 9; i++) {
            unordered_set<char> row;
            for (int j = 0; j < 9; j++) {
                if (row.count(board[i][j])) {
                    return false;
                } else if (board[i][j] != '.' && !row.count(board[j][i])) {
                    row.insert(board[i][j]);
                }
            }
        }
        
        for (int i = 0; i < 9; i++) {
            unordered_set<char> column;
            for (int j = 0; j < 9; j++) {
                if (column.count(board[j][i])) {
                    return false;
                } else if (board[j][i] != '.' && !column.count(board[j][i])){
                    column.insert(board[j][i]);
                }
            }
        }
        
        for (int i = 0; i<3; i++) {
            for (int j = 0; j<3; j++) {
                int check[9] = {0};
                for (int ii = i*3; ii<i*3+3; ii++) {
                    for (int jj=j*3; jj<j*3+3; jj++) {
                        if (board[ii][jj] == '.') continue;
                        if (check[board[ii][jj] - '1'] != 0) return false;
                        check[board[ii][jj]-'1'] = 1;
                    }
                }
            }
        }

        
        return true;
    }
};
