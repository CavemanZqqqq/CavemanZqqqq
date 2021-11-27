class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt = 1;
        int max = nums[0];
        for(int i = 1; i < nums.size(); i++) {
            if (nums[i] == max) {
                cnt++;
            } else {
                if(cnt){
                    cnt--;
                } else {
                    max = nums[i];
                    cnt++;
                }
            }
        }
        return max;
    }
};
