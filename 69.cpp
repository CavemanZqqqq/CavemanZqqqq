class Solution {
public:
    int mySqrt(int x) {
        int right = x;
        int left = 0;
        long mid;
        int ans;
        while (right >= left) {
            mid = left + (right - left) / 2;
            if (mid * mid > x) right = mid-1;
            else if (mid * mid <= x) {
                ans = mid;
                left = mid + 1;
            }
        }
        return ans;
    }
};
