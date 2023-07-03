#include <bits/stdc++.h>
using namespace std;

class queue1
{
    // int * arr;    // this also method to define array
    int arr[20];
    int front;
    int back;

public:
    queue1(int val)
    {
        // arr = new int[val];
        int arr;
        front = -1;
        back = -1;
    }
    void push(int x)
    {
        // 1st we have tocheck for queue have space or not
        if (back == 20 - 1)
        {
            cout << "The queue is overflow!" << endl;
        }
        back++;
        arr[back] = x;

        if (front == -1)
        {
            front++;
        }
    }
    void pop(){
        // 1st we have to check for it contain element or not
        if(front == -1 || front > back){
            cout<<"The queue is empty!"<<endl;
        }
        else{
            front++;
        }
    }
    int peek(){
        if(front==-1 || front >back){
            cout<<"No element in the queue!"<<endl;
            return -1;
        }
        return arr[front];
    }
    bool isEmpty(){
        if(front==-1 || front >back){
            return true;
        }
        return false;
    }
};

int main()
{
    queue1 q(20);
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
   
    cout<<q.isEmpty()<<endl;
    return 0;
}
