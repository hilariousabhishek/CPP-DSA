#include <iostream>
using namespace std;

//Class is kind of templete used in making a user defined data type
class Hero{
    private:
    int health;

    public:
    int level;

    Hero() {
    cout << "Constructor Called" << endl<<endl;
    }

    //Parameterised Constructor
    Hero(int health) {
   
    //this keyword is a pointer which contain the address of current object
    //In this case object is Ramesh
    this -> health = health;
    }

    Hero(int health, char level) {
    cout <<endl<< "this keyword: " << this << endl;
    this -> health = health;
    this -> level = level;
    }


    void print(){
        cout<<"Health: "<<this->health<<endl;
        char a=this->level;
        cout<<"level: "<<a<<endl;
    }
};

int main(){
    //creation of Object
    Hero ramesh(70,'A');
    

    cout << "Address of ramesh: " << &ramesh <<endl<<endl; 
    ramesh.print();//prints garbage
    cout<<endl;

    // //dynamically
    // Hero *h = new Hero ('A') ;
   


    return 0;
}