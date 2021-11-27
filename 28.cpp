// class Solution {
// public:
//     int strStr(string haystack, string needle) {
//         int n = haystack.size();
//         int m = needle.size();
//         if(m == 0){
//             return 0;
//         }
//         int a =0;
//         while(a < n - m + 1){
//             if(haystack[a] == needle[0]){
//                 if(match(haystack, needle, a)){
//                     return a;
//                 }
//             }
//             a++;
//         }
//         return -1;
//     }
    
    
//     bool match(string a, string b, int m){
//         int n = b.size();
//         int i = 0;
//         while(i < n){
//             if(a[m] != b[i]){
//                 return 0;
//             }
//             i++;
//             m++;
//         }
//         return 1;
//     }
// };

// void perfix(string a, vector<int> b, int n){
//     int i = 1;
//     int len = 0;
//     b[0] = 0;
//     while(i < n){
//         if(a[len] == a[i]){
//             len++;
//             b[i] = len;
//             i++;
//         }else{
//             if(len > 0){
//                 len = b[len -1];
//             }else{
//                 b[i] = len;
//                 i++;
//             }
//         }
//     }
// }

// void perfixtable(vector<int> a, int n){
//     int i;
//     for(i = n-1; i > 0; i--){
//         a[i] = a[i-1];
//     }
//     a[0] = -1;
// }

class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size(), m = needle.size();
        if (m == 0) {
            return 0;
        }
        vector<int> pi(m);
        for (int i = 1, j = 0; i < m; i++) {
            while (j > 0 && needle[i] != needle[j]) {
                j = pi[j - 1];
            }
            if (needle[i] == needle[j]) {
                j++;
            }
            pi[i] = j;
        }
        for (int i = 0, j = 0; i < n; i++) {
            while (j > 0 && haystack[i] != needle[j]) {
                j = pi[j - 1];
            }
            if (haystack[i] == needle[j]) {
                j++;
            }
            if (j == m) {
                return i - m + 1;
            }
        }
        return -1;
    }
};

