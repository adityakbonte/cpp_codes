#include <bits/stdc++.h>
using namespace std;

class stack1
{
    int arr[20];
    int top;

public:
    stack1()
    {
        int arr;
        top = -1;
    }

    bool isfull(){
        if(top==19){
            return true;
        }
        return false;
    }

    void push(int val)
    {
        // 1st we have tocheck for queue have space or not
        if(isfull()){
            return;
        }
        top++;
        arr[top] = val;
        cout<<"we pushed "<<val<<" element"<<endl;
    }

    void pop(){
        if(top==-1){
            cout<<"stack is empty!"<<endl;
        }
        else{
            cout<<"popped element is "<<arr[top]<<endl;
            top--;
        }
    }
    // void display(int arr){
    //     int i=0;
    //     cout<<"elements are: "<<endl;
    //     for(i=0;i<top;i++){
    //         cout<<arr[i];
    //     }
    // }
    
};

int main()
{
    stack1 s;
    s.push(1);
    s.push(2);
    s.pop();
}
