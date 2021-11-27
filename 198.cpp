class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) {
            return nums[0];
        }
        vector<int> d(n);
        d[0] = nums[0];
        d[1] = max(nums[0], nums[1]);
        for (int i = 2; i < n; i++) {
            d[i] = max(nums[i] + d[i-2], d[i-1]);
        }
        return d[n-1];
    }
};
