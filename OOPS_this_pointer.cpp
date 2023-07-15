#include<iostream>
using namespace std;
class A{
    int a;
    public:
        void setData(int a){       // before this we are using differetn name of variable than the given one but when we want to keep variable name same then we have to put this keyword for the declaring the a varible seperately. 

        //if we put the a=a in this function then it gives the garbage value so to avoid this w use this keyword
            this->a = a;    
        }

        void getData(){
            cout<<"The value of a is "<<a<<endl;
        }
};

int main(){
    A a;
    a.setData(4);
    a.getData();
    return 0;
}