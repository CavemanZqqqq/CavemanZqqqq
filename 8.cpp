class Solution {
public:
    int myAtoi(string str) {

        int flag = 1;
        int i = 0;
        int len = str.length();
        while(str[i] == ' '){

            i++;
        }
        if(len == i || (!isdigit(str[i]) && str[i] != '+' && str[i] != '-')){

            return 0;
        }
         
        if(str[i] == '-' || str[i] == '+'){  
         
            if(str[i] == '-'){

                flag = -1;
            }
            i++;   
        }
        long num = 0;
        while(i<len && isdigit(str[i])){

            num = num*10+(str[i]-'0');
            i++;
            if(num > INT_MAX && flag == 1)
                return INT_MAX;
            if(num >INT_MAX && flag == -1)
                return INT_MIN; 
        }
        return num*flag;
    }
};


