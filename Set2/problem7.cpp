#include<bits/stdc++.h>

using namespace std;

int prec(char c){
    if(c=='^'){
        return 3;
    }
    else if(c=='*' || c=='/'){
        return 2;
    }
    else if(c=='+' || c=='-'){
        return 1;
    }
    else{
        return -1;
    }
}

void infixToPostfix(string s){
    stack<char> st;
    st.push('N');
    string out;

    for(int i = 0; i<s.length(); i++){
        if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')){
            out+=s[i];
        }
        else if(s[i] == '('){
            st.push(s[i]);
        }
        else if(s[i] == ')'){
            while(st.top() != 'N' && st.top() != '('){
                char c = st.top();
                st.pop();
                out+=c;
            }
            if(st.top() == '('){
                char c = st.top();
                st.pop();
            }
        }
        else{
            while(st.top() != 'N' && prec(s[i]) <= prec(st.top())){
                char c = st.top();
                st.pop();
                out+=c;
            }
            st.push(s[i]);
        }
    }
    while(st.top() != 'N'){
        char c = st.top();
        st.pop();
        out+=c;
    }
    cout << out << endl;
}

int main()
{
    string exp = "((A+B)/D)^((E-F)*G)";
    infixToPostfix(exp);
    return 0;
}
