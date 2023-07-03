#include <bits/stdc++.h>
using namespace std;

class A{
    public:
    void funcAB(){
        cout<<"func1 called!"<<endl;
    }
};
class B{
    public:
    void funcAB(){
        cout<<"func2 called!"<<endl;
    }
};

// Multiple inheritance 
class C : public A, public B{
    public:
    void funcC(){
        cout<<"called func3!"<<endl;
    }
};

int main(int argc, char const *argv[])
{
    // create new object
    // now here ambiguity works because it is multilevel inheritance and bot a and b class have same name function inside so because of inheritance bot can be access by class c but they have same name so which one we have to call for this we use ### Scope resolution operator ### :: this type 
    C adi;
    adi A :: funcAB();
    return 0;
}
