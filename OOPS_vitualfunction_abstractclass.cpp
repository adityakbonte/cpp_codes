#include <bits/stdc++.h>
using namespace std;

class base{
    public:
    int var_base = 1;

    virtual void display(){
        cout<<"This is parent base class, vlaue of var_base = "<<var_base<<endl;
    }
};

class derrived: public base{
    public:
    int var_derrived = 2;
    void display(){
        cout<<"This is base class value, vlaue of var_base = "<<var_base<<endl;
        cout<<"This is derrived class, vlaue of var_base = "<<var_derrived<<endl;
    }
};

int main(int argc, char const *argv[])
{
    /* code */
    base * base_ptr;
    base base_obj;
    derrived derrived_obj;
    base_ptr = &derrived_obj;
    base_ptr->display();
    return 0;
}
