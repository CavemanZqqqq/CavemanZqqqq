class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        int res = 0;
        for(auto e : nums) {
            res = (res ^ e);
        }
        return res;
    }
};
