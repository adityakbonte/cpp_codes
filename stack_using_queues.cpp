#include <bits/stdc++.h>
using namespace std;

class stack1{
    int N ;     // size of queues
    queue<int>q1;
    queue<int>q2;

    public:
    stack1(){
        N = 0;
    }
    // int N=0;     // if we write this directly it also works
    
    void push(int val){
        q2.push(val);
        N++;
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        // now to swap or reverse the q1 and q2, use new temp queue
        queue<int>temp = q1;
        q1= q2;
        q2= temp;
    }
    void pop(){
        q1.pop();
        N--;
    }
    int top(){
        return q1.front();
    }
    int currentSize(){
        return N;
    }

};

int main()
{
    stack1 st;
    st.push(1);
    st.push(2);
    st.push(3);

    cout<<st.top()<<endl;
    cout<<st.currentSize()<<endl;
    st.pop();
    cout<<st.currentSize();
    return 0;
}
