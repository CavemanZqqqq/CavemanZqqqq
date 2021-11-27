class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int res = nums[0];
        int n = nums.size();
        vector<int> d(n);
        d[0] = nums[0];
        for (int i = 1; i < n; i++){
            d[i] = max(d[i-1] + nums[i] ,nums[i]);
            if (res < d[i]){
                res = d[i];
            }
        }
        return res;
    }
};
