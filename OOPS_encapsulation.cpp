#include <bits/stdc++.h>
using namespace std;

class student{
    // encapsulation involves combining similar data and functions into a single unit called a class
    private:
    int roll_no =31;
    int age=21;

    public:
    int getAge(){
        cout<<"age is "<<age<<endl;
        return this->age;
        
    }
};

int main(int argc, char const *argv[])
{
    student first;
    cout<<"encapsulation! "<<first.getAge()<<endl;

    return 0;
}
