#include <bits/stdc++.h>
using namespace std;

class Hero{
    // the values which are defined inside class is private defaultly;
    //  to make it public use public keyword
    // also the constructor is present inside the class with  its name same as class name and its type is like parametrised constructor

     
    int height = 6;
    public:
    char colour = 'R';

    // constructor
    Hero(){
        cout<<"I am constructor!"<<endl;
    }  

    // incase any parameter or variable is private and we want to access it without error then using getter and setter we can access it.
    // getter is used for the read the value and the setter is used for the applying the condition or changing the value.

    int getheight(){
        return height;
    }
    void setheight(int h){
        height = h;
    }
    
    // now parameterised constructor
    Hero(int height){
        cout<<"this-> "<<this<<endl;
        this->height = height;  // in this case parameter and variable both have same name so use rhis keyword
    }

    Hero(int height,char colour){
        this->colour = colour;
        this->height = height;
    }

    void print(){
        cout<<height<<endl;
        cout<<colour<<endl;

    }

    //// Destructor 
    // is same as constructor only differance is: use tilda sign before name at the time of making because the name is as same as constructor

    ~Hero(){
        cout<<"destructor bhai called!"<<endl;
    }

    

    // This keyword is store the address of the current object 


};

int main(int argc, char const *argv[])
{
    // there is 2 type of object representation
    //1. object created statically
    Hero ram;
    cout<<" height of ram : "<<ram.getheight()<<endl;
    cout<<"ram likes color: "<<ram.colour<<endl;
    // set the value from here inside the set 
    ram.setheight(7);
    cout<<"new height : "<<ram.getheight()<<endl;
    ram.print();
   
    //2. object created dynamically
    Hero *h = new Hero;
    cout<<" height of ram : "<<ram.getheight()<<endl;
    cout<<"ram likes color: "<<ram.colour<<endl;
    h->print();

    // callling the parametrised constructor
    cout<<"address of ram : "<<&ram<<endl;
    Hero ved(9);
    cout<<"new parameterised height is : "<<&ved<<endl;
    ved.print();

    Hero shri(10,'J');
    shri.print();

    // copy constructor
    Hero adi(77,'A');
    adi.print();
    // this values of adi copy to vedi
    Hero vedi(adi);
    vedi.print();


    // for each static object destructor will call but for dynamic object we have to call for it 
    // means in above main() file code we declare total 5 static object and 1 dynamic object so destructor called by 5 time 
    // if we want to call for dynamic then call like, delete(dymanic_objectname);
    // manually destructor call for dynamic object

    delete h;   // now after this it total called 6 times to destructor

    return 0;
}
