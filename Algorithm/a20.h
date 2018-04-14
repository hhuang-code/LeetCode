class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int len = s.size();
        for(int i = 0; i < len; i++){
            if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
                st.push(s[i]);
            }else if(s[i] == ')'){
                if(!st.empty() && st.top() == '('){
                    st.pop();
                }else{
                    return false;
                }
            }else if(s[i] == ']'){
                if(!st.empty() && st.top() == '['){
                    st.pop();
                }else{
                    return false;
                }
            }else if(s[i] == '}'){
                if(!st.empty() && st.top() == '{'){
                    st.pop();
                }else{
                    return false;
                }
            }
        }
                                        
        return st.empty();
    }
};
