#include <iostream>
using namespace std;
#include <stack>
#include<math.h>

int postfixevaluation(string s){
    stack<int>st;
    for(int i=0;i<s.length();i++){
        if(s[i]>='0' && s[i]<='9'){
            st.push(s[i]-'0');
        }
        else{
            int n2 = st.top();
            st.pop();
            int n1 = st.top();
            st.pop();

            switch (s[i])
            {
            case '+':
                st.push(n1+n2);
                break;
            case '-':
                st.push(n1-n2);
                break;
            case '*':
                st.push(n1*n2);
                break;
            case '/':
                st.push(n1/n2);
                break;
            case '^':
                st.push(pow(n1,n2));
                break;
            
            default:
                break;
            }
        }
    }
    return st.top();
}

int main(int argc, char const *argv[])
{
    cout<<postfixevaluation("46+2/5*7+");
    
    return 0;
}
