class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_set<int> res;
        for (int i = 0; i < n; i++) {
            if (!res.count(nums[i])) {
                res.insert(nums[i]);
            } else {
                for(int j = i - 1; j >= 0 && i - j <= k; j-- ) {
                    if (nums[j] == nums[i]) {
                        return true;
                    }
                }
            }
        }
        return false;
    }
};
