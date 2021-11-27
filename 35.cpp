class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int left= 0, right = n-1;
        while (left <= right){
            int mid = left + ((right - left)/2);
            if(nums[mid] > target){
                right = mid - 1;
            }
            if(nums[mid] < target){
                left = mid + 1;
            }
            if(nums[mid] == target){
                return mid;
            }
        }
        return right + 1;
    }
};
