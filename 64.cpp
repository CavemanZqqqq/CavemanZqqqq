class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        
        int m = grid.size();
        int n = grid[0].size();
        int sum = 0;
        
        int d[m][n];
        for (int i = 0; i < m; ++i) {
            sum = sum + grid[i][0];
            d[i][0] = sum;
        }
        
        sum = 0;
        
        for (int i = 0; i < n; ++i) {
            sum = sum + grid[0][i];
            d[0][i] = sum;
        }
        
        
        for (int i = 1; i < n; ++i) {
            for (int j = 1; j < m; ++j) {
                if (d[j][i-1] <= d[j-1][i]) {
                    d[j][i] = d[j][i-1] + grid[j][i];
                } else {
                    d[j][i] = d[j-1][i] + grid[j][i];
                }
            }
        }
        
        
        return d[m-1][n-1];
    }
};
