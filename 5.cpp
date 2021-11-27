class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        if (n < 2) {
            return s;
        }
        vector<vector<int>> dp(n, vector<int>(n));
        int maxlen = 1;
        int begin = 0;
        
        for (int i = 0; i < n; i++) {
            dp[i][i] = true;
        }
        
        for (int i = 1; i < n; i++) {
            for (int j = i-1 ; j >= 0; j--) {
                if(s[i] == s[j] && (i - j < 3 || dp[i-1][j+1])) {
                    dp[i][j] = true;
                    if (i - j + 1 > maxlen) {
                        maxlen = i - j + 1;
                        begin = j;
                    }
                } else {
                    dp[i][j] = false;
                }
            }
        }
        return s.substr(begin, maxlen);
    }
};

      
