class Solution {
public:
    int happy (int n) {
        int temp = 0;
        while(n){
            int x = n % 10;
            temp = x*x +temp;
            n /= 10;
        }
        return temp;
    }
    
    
    bool isHappy(int n) {
        unordered_set<int> hash;
        int t = happy(n);
        while(t > 1) {
            if (hash.count(t)) {
                return false;
            } else {
                hash.insert(t);
                t = happy(t);
            }
        }
        return true;
    }
};



