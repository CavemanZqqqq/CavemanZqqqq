class Solution {
public:
    string intToRoman(int num) {
        int t = num/1000 ;
        int b = (num - t*1000)/100;
        int s = (num - t*1000 - b*100)/10;
        int g = num - t*1000 - b*100 - s*10;
 
        string res;
        for (int i = 0; i < t; i++) {
            res += "M";
        }
        
        
        if (b < 4) {
           for (int i = 0; i < b; i++) {
               res += "C";
           }
        } else if (b == 4) {
            res += "CD";
        } else if (4 < b && b < 9) {
            res += "D";
            for (int i = b - 5; i > 0; i--){
                res += "C";
            }
        } else {
            res += "CM";
        }
        

        
        if (s < 4) {
           for (int i = 0; i < s; i++) {
               res += "X";
           }
        } else if (s == 4) {
            res += "XL";
        } else if (4 < s && s < 9) {
            res += "L";
            for (int i = s - 5; i > 0; i--){
                res += "X";
            }
        } else {
            res += "XC";
        }
        
        

        
        if (g < 4) {
           for (int i = 0; i < g; i++) {
               res += "I";
           }
        } else if (g == 4) {
            res += "IV";
        } else if (4 < g && g < 9) {
            res += "V";
            for (int i = g - 5; i > 0; i--){
                res += "I";
            }
        } else {
            res += "IX";
        }
        
        return res;
    }
};
