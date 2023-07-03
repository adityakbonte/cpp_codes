#include <iostream>
#include <stack>
using namespace std;

void reverse_sent(string s){
    stack <string>st;

    for(int i=0;i<s.length();i++){
        string word ="";
        int n;
        // cout<<s.length()<<" "<<endl;
        while(s[i]!=' ' && i<s.length()){
            word+= s[i];
            i++;
        }
        st.push(word);
    }
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
}

int main() 
{
    string s = "My name is aditya!";
    reverse_sent(s);
    return 0;
}
