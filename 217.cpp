class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> count;
        for (int i = 0; i < n; i++) {
            if (count.count(nums[i])) {
                return true;
            } else {
                count.insert(nums[i]);
            }
        }
        return false;
    }
};
