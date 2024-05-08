#include <bits/stdc++.h>
using namespace std;

bool checkValidParenthesis(string s){
    stack<char> st;
    for(char ch : s){
        if(st.empty()){
            st.push(ch);
        }

        char top = st.top();
        if(top == '(' && ch == ')') st.pop();
        if(top == '{' && ch == '}') st.pop();
        if(top == '[' && ch == ']') st.pop();
    }

    if(st.empty()) return true;
    else return false;
}

int main(int argc,  char const *argv[])
{
    string s;
    cin >> s;
    if(checkValidParenthesis(s)) cout << "The parenthesis is valid.";
    else cout << "The parenthesis ain't valid.";
    return 0;
}
