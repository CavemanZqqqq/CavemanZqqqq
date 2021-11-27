class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int ans = 0;
        while (left < right) {
            // cout<<right<<left<<endl;
            int minh = min(height[left], height[right]);
            if (minh * (right - left) > ans) {
                ans = minh * (right - left);
            }
            
            if (height[left] > height[right]) {
                right--;
            } else {
                left++;
            }
        }
        return ans;
    }
};
