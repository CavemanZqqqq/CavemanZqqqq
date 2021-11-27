class Solution {
public:
    int romanToInt(string s) {
        int n = s.size();
        int sum = 0;
        int i = 0;
        while(i < n){
            while(s[i] == 'M'){
                sum = sum + 1000;
                i++;
            }
             while(s[i] == 'D'){
                sum = sum + 500;
                i++;
            }
             while(s[i] == 'C'){
                 if(s[i+1] != 'M'&&s[i+1] != 'D'){
                     sum = sum + 100;
                     i++;
                 }else{
                     sum = sum - 100;
                     i++;
                 }
                
            }
             while(s[i] == 'L'){
                sum = sum + 50;
                i++;
            }
             while(s[i] == 'X'){
                if(s[i+1] != 'C'&&s[i+1] != 'L'){
                     sum = sum + 10;
                     i++;
                 }else{
                     sum = sum - 10;
                     i++;
                 }
            }
             while(s[i] == 'V'){
                sum = sum + 5;
                i++;
            }
             while(s[i] == 'I'){
                 if(s[i+1] != 'X'&&s[i+1] != 'V'){   
                     sum = sum + 1;
                     i++;
                 }else{
                     sum = sum - 1;
                     i++;
                 }
            }
        }
        return sum;
    }
};
