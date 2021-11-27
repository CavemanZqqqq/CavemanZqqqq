class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> ret(rowIndex + 1);
        for (int i = 0; i <= rowIndex; ++i) {
            ret[i].resize(i + 1);
            ret[i][0] = ret[i][i] = 1;
            for (int j = 1; j < i; ++j) {
                ret[i][j] = ret[i - 1][j] + ret[i - 1][j - 1];
            }
        }
        return ret[rowIndex];
    }
};

