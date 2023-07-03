#include <iostream>
using namespace std;
#include <stack>
#include<math.h>

int prefixevaluation(string s){
    stack<int>st;
    for(int i=s.length()-1;i>=0;i--){
        if(s[i]>='0' && s[i]<='9'){
            st.push(s[i]-'0');
        }
        else{
            int n1 = st.top();
            st.pop();
            int n2 = st.top();
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
    cout<<prefixevaluation("-+7*45+20");
    
    return 0;
}
