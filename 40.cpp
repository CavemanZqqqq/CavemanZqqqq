class Solution {
public:
    void dfs (vector<vector<int>>& results, vector<int>& result, vector<int>& candidates, int level, int target) {
        //boundary
        if (target == 0) {
            results.push_back(result);
        }
        
        //search
        for (int i = level; i < candidates.size() && target - candidates[i] >= 0; i++) {
            if (i > level && candidates[i] == candidates[i-1]) continue;
            result.push_back(candidates[i]);
            dfs (results, result, candidates, i+1, target - candidates[i]);
            result.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> results;
        vector<int> result;
        dfs(results, result, candidates, 0, target);
        return results;
    }
};
