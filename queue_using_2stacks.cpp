#include<bits/stdc++.h>
using namespace std;

class queue1{
    // require 2 stacks
    stack<int>s1;
    stack<int>s2;

    public:
    void push(int val){
        s1.push(val);
    }
    int pop(){
        if(s1.empty() && s2.empty()){
            cout<<"queue is empty! ";
            return -1;
        }
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
        int topval = s2.top();
        s2.pop();
        return topval;
    }
    void isempty(){
        if(s1.empty() && s2.empty()){
            cout<<endl<<"it is empty!";
        }
        else{
            cout<<"it is not empty!"<<endl;
        }
        
    }
    void display(){
        while(!s2.empty()){
            cout<<s2.top()<<endl;
            s2.pop();
        }
    }
};

int main(int argc, char const *argv[])
{
    queue1 q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    
    q.pop();
    q.pop();
    q.isempty();
    q.display();
    return 0;
}
