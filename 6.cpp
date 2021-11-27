class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1) {
            return s;
        }
        int n = s.size();
        string res = "";
        string tmp = "";
        int gap = (numRows - 1)*2;
        for(int i = 0; i < numRows; i++) {
            int j = i;
            string tmp = "";
            while(j < n) {             
                tmp += s[j];
                int mid = j + (numRows - i - 1)*2;
                if(i != 0 && i != numRows-1 && mid < n){
                    tmp += s[mid];
                }
                j = j + gap;
            }
            res += tmp;
        }
        return res;
    }
};
