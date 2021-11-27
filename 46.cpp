class Solution {
public:
    void dfs (vector<vector<int>>& results, vector<int>& result, vector<int>& nums) {
        //boundary
        if (nums.size() == 0) {
            results.push_back(result);
        }
        
        //search
        for (int i = 0; i < nums.size(); ++i) {
            result.push_back(nums[i]);
            vector<int> ans;
            ans = nums;
            cout<<ans[i]<<" ";
            ans.erase(ans.begin() + i);
            dfs(results,result,ans);
            result.pop_back();
            cout<<endl;
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> results;
        vector<int> result;
        dfs(results, result, nums);
        return results;
    }
};
