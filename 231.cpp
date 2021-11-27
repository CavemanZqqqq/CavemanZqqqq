class Solution {
public:
    bool isPowerOfTwo(int n) {
        long i = 1;
        if (n > 0) {
            while (i <= n) {
            
            if (i == n) {
                return true;
            } 
            i = i * 2;
        }
    }
        return false;
    }
};
