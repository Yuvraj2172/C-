#include <stack>
bool isBalanced(string s) 
{
    stack<char> st;
    int len = s.length();
    for(int i=0;i<len;i++){
        char ch= s[i];
        if (ch == '(') {
          st.push(ch);
        } else if (ch == ')' ){
            if(st.size()==0)return false;
            char chtop = st.top();
            if(chtop=='('){
                st.pop();
            }
            else{
                return false;
            }
        }
    }
    if(st.size()==0)return true;
    return false;
}