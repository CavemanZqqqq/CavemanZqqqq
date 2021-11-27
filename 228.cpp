class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int n = nums.size();
        string s;
        vector<string> res;
        int i = 0;
        while (i < n) {
            int l = i++;
            s = to_string(nums[l]);
            
            while (i < n && nums[i] == nums[i-1] + 1) {
                i++;
            }
            int j = i - 1;
            if (j == l) {
                res.push_back(s) ; 
            } else {
                s = s + "->" + to_string(nums[j]);
                res.push_back(s);
            }
        }
        return res;
    }
};
