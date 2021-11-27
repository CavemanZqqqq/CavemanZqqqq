class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        if (grid.empty()) return 0;
        int n = grid.size();
        int m = grid[0].size();
        int island = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                island += grid[i][j] - '0';
                dfs(i,j,grid);
            }
        }
        return island;
    }
    
private:
    void dfs(int x, int y, vector<vector<char>>& grid) {
        if (grid[x][y] == '0' || x >= grid.size() || y >= grid[0].size() || x < 0 || y < 0) return ;
        grid[x][y] = '0';
        if(x - 1 >= 0) dfs(x-1,y,grid);
        if(x + 1 < grid.size()) dfs(x+1,y,grid);
        if(y + 1 < grid[0].size()) dfs(x,y+1,grid);
        if(y - 1 >= 0) dfs(x,y-1,grid);
        
        
    }
};
