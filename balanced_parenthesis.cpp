#include<iostream>
#include<stack>
using namespace std;


bool isValid(string s){
    int n = s.size();
    bool ans = true;
    stack<char>st;
    for(int i=0;i<n;i++){
        if(s[i]=='(' || s[i]=='{' || s[i]=='['){
            st.push(s[i]);
        }
        else if(!st.empty() && s[i]==')'){
            if(st.top()=='('){
                st.pop();
            } 
            else{
                ans=false;
                break;
            }
        }
        else if(!st.empty() && s[i]=='}'){
            if(st.top()=='{'){
                st.pop();
            } 
            else{
                ans = false;
                break;
            }
        }
        else if(!st.empty() && s[i]==']'){
            if(st.top()=='['){
                st.pop();
            } 
            else{
                ans = false;
                break;
            }
        }
    }
    if(!st.empty()){
        ans = false;
    }
    return ans;
}

int main(int argc, char const *argv[])
{
    string s = "{[(()]}";
    if(isValid(s)){
        cout<<"Valid string!";
    }
    else
    {
        cout<<"Invalid string!";
    }
    
    return 0;
}
