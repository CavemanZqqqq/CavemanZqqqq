class Solution {
public:
    // int
    static const int N = 100;
    bool visited[N][N];
    int dx[4] = {1, -1, 0, 0};
    int dy[4] = {0, 0, 1, -1};
    
    
    bool dfs (int i, int  j, vector<vector<char>>& board, string& word, int u) {
        if (u == word.size() - 1) {
            return true;
        }

                    for (int k = 0; k < 4; ++k) {
                        int a = i + dx[k];
                        int b = j + dy[k];
                        if (a < 0 || b < 0|| a > board.size()-1|| b > board[0].size()-1) continue;
                        if (board[a][b] != word[u+1]) continue;
                        if (visited[a][b]) continue;
                        
                        
                        visited[a][b] = true;
                        if(dfs(a,b,board,word,u+1)) {
                            cout<<a<<b<<endl;
                            return true;
                        }
                        visited[a][b] = false;
                    
                }
        return false;
    }
    
    bool exist(vector<vector<char>>& board, string word) {
        if (board.empty() || board[0].empty()) false;
        
        int m = board.size();
        int n = board[0].size();
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                visited[i][j] = true;
                if (board[i][j] == word[0] && dfs(i,j,board,word,0)){
                    cout<<i<<j<<endl;
                    return true;
                } 
                visited[i][j] = false;
            }
        }
        return false;
    }
};



