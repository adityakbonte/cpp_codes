#include <bits/stdc++.h>
using namespace std;

int redundancy_check(string s){
    stack<char>st;
    bool ans = false;
    for(int i=0;i<s.size();i++){
        if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/'){
            st.push(s[i]);
        }
        else if(s[i]=='('){
            st.push(s[i]);
        }
        else if(s[i]==')'){
            if(st.top()=='('){
                ans = true;
            }
            while(st.top()=='+' || st.top()=='-' || st.top()=='*' || st.top()=='/'){
                st.pop();
            }
            st.pop();
        }
    }
    return ans;
}

int main(int argc, char const *argv[])
{
    // to check redundancy of the paranthesis means, there is no bracket extra which doesnot having any operator inside it ex = ((2+3)) this redundant because we are able to write this like (2+3);
    string s = "(((2*33)-2))";
    cout<<redundancy_check(s);
    return 0;
}
