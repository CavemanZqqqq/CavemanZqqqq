class Solution {
public:
    int titleToNumber(string columnTitle) {
        long cnt = 1;
        int n = columnTitle.size();
        int res = 0;
        while(n>0) {
            int tem = columnTitle[n - 1] - 'A' + 1;
            res = tem*cnt + res;
            cnt = 26 * cnt;
            n--;
        }
        return res;
    }
};




