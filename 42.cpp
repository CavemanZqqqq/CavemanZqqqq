class Solution {
public:
    int trap(vector<int>& height) {
        int res = 0;
        
        //find the highest bar
        int hightest = 0;
        int index = -1;
        for (int i = 0; i < height.size(); ++i) {
            if (height[i] > hightest) {
                hightest = height[i];
                index = i;
            }
        }
        
        //left
        int left = 0;
        for (int i = 1; i < index; ++i) {
            if (height[left] < height[i]) {
                left = i;
            }
            
            if (height[left] > height[i]) {
                res = res + height[left] - height[i];
            }
        }
        
        //right
        int right = height.size() - 1;
        for (int i = height.size() - 2; i > index; --i) {
            if (height[right] < height[i]) {
                right = i;
            }
            
            if (height[right] > height[i]) {
                res = res + height[right] - height[i];
            }
        }
        return res;
    }
};
