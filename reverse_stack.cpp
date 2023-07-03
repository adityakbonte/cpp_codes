#include <iostream>
#include <stack>
using namespace std;

void pushAtBottom(stack<int>s,int top){
    if(s.empty()){
        s.push(top);
        return;
    }
    top = s.top();
    s.pop();
    // reverse_stack(s);
    pushAtBottom(s,top);
}

void reverse_stack(stack<int>s){
    if(s.empty()){
        return; 
    }

    int top = s.top();
    s.pop();
    reverse_stack(s);
    // cout<<top;
    pushAtBottom(s,top);
}



// simple method to reverse the stack
void reverse(stack<int>s){
    if(s.empty()){
        return; 
    }

    stack<int>st;
    while(!s.empty()){
            int t = s.top();;
            s.pop();
            st.push(t);
        }
        while(!st.empty()){
            cout<<st.top();
            st.pop();
        }
}


int main(int argc, char const *argv[])
{
    stack<int>s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    // reverse_stack(s);
    reverse(s);

    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
    return 0;
}
