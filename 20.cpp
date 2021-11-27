class Solution {
public:
    bool isValid(string s) {
        stack<char> tmp;
        int n = s.size();
        if (n%2 == 1){
            return false;
        }
        if(s[0] == ')' ||s[0] == '}'||s[0] == ']'){
            return false;
        }
        for(int i = 0; i < n; i++){   
            if(s[i] == '(' || s[i] == '{' ||s[i] == '['){
                tmp.push(s[i]);
            }
            else if(tmp.size() && s[i] == ')' && tmp.top() == '('){
                    tmp.pop();
                }
            else if(tmp.size() && s[i] == ']'&& tmp.top() == '['){
                    tmp.pop();
                }
            else if(tmp.size() && s[i] == '}'&& tmp.top() == '{' ){
                    tmp.pop();
                }
            else{
                    return false;
                }
        }
        return tmp.empty();
    }
};

//for(auto c: s) ±éÀú×Ö·û´®
