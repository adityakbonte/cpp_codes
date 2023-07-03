#include <bits/stdc++.h>
using namespace std;


// inheritance

class human{
    protected:
    int height = 6;
    int weight =62;
    int age =21;

    human(){
        cout<<"parent constructor!"<<endl;
    }
    void setWeight(int weight){
        this->weight = weight;
    }
};

class male: protected human{
    public:
    string colour = "red";
    cout<<age;
    void sleep(){
        cout<<"child function! male.."<<endl;
    }
};

int main(int argc, char const *argv[])
{
    male adi;
    cout<<adi.age<<endl;
    cout<<adi.colour<<endl;
    cout<<adi.height<<endl;
    cout<<adi.weight<<endl;

    //calling function
    adi.sleep();

    return 0;
}
