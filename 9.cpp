
class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }

        double revertedNumber = 0;
        int num = x;
        while (num > 0) {
            revertedNumber = revertedNumber * 10 + num % 10;
            num /= 10;
        }
        return x == revertedNumber;
    }
};

