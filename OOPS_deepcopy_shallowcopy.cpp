#include <bits/stdc++.h>
using namespace std;

class Hero{
    private:
    int id;

    public:
    char div;
    char name[100];

    // simple constructor
    Hero(){
        cout<<"main constructor it is!"<<endl;
        
    }
    
    // parametrised constructor
    Hero(int id){
        cout<<"this is paramterised constrictor!"<<endl;
        this->id = id;
    }

    // this copy constructor makes the shallow copy
    // copy constructor
    Hero(Hero& temp){
        char *temp = new char[strlen(temp.name) +1];
        strcpy(ch,temp.name);
        this->name = ch;
        
        cout<<"this is copy constructor!"<<endl;
        this->id = temp.id;
        this->div = temp.div;
    }
    void print(){
        cout<<endl;
        cout<<"[ Name: "<<this->name<<" ,";
        cout<<"ID: "<<this->id<<" ,";
        cout<<"div: "<<this->div<<" ]";
        cout<<endl;
    }
    
    void setId(int ID){
        id = ID;
    }
    void setDiv(char d){
        div = d;
    }
    void setName(char name[]){
        strcpy(this->name,name);
    }
};

int main()
{
    Hero hero1;
    hero1.setId(5);
    hero1.setDiv('A');
    char name[] = "Adi";
    hero1.setName(name);

    hero1.print();

    // now use copy constructor
    Hero hero2(hero1);
    hero2.print();
    // now change the 1st char of name
    // default copy constructor makes a shallow copy
    hero1.name[0] = 'a';
    hero1.print();

    hero2.print();
    return 0;
}
