class Solution {
public:
    bool isValid(string s) {
        
        stack<char> v;

        for(int i=0;i<s.size();i++){

            if( (s[i]=='(') or (s[i]=='{') or (s[i]=='[') ){
                v.push(s[i]);
            }
            else{
                if(v.empty()) return false;
                else{
                    if( (s[i]==')' and v.top() == '(') or (s[i]=='}' and v.top() == '{') or (s[i]==']' and v.top() == '[')){
                        v.pop();
                    }
                    else
                    return false;
                }
            }
        }
        if(v.empty()) return true;
        return false;
    }
};
