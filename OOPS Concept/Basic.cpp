#include <iostream>
//We can use both internal or external mathods for defining class
//#include "Hero. cpp"
using namespace std;

//An Object is an instance of class which have state/properties and behaviour
//Paul from tekken has---
//property - name, Level, Health,
//behaviour - Dance, attack 1,attack 2


//Class is kind of templete used in making a user defined data type
class Hero{
 //default is private   
   
    //private members can only be accessed within the class
    private:
    char level;
 
 //Using getters and setters for acsessing private class
     public:
    //properties 
    int health;

    char getLevel() {
    return level;
    }

    void setLevel (char ch) {
    level = ch;
    }

//Default constructor always called when an object is created
//It has no return called as Object.Hero()
    Hero () {
    cout << "Constructor Called" << endl<<endl;
    }
};

//Note - In case of empty class object will return a size of 1.
int main(){

//static allocation in stack

    //creation of Object
    Hero ramesh;
    ramesh.health = 70;
    
    //ramesh.level = 'A';
    ramesh.setLevel('C') ;

    cout << "health is: " << ramesh.health << endl; 
    cout << "Level is: " << ramesh.getLevel() << endl;

    //Getting size
    //cout << "size: " << sizeof (ramesh) << endl;

    cout<<endl;
    //dynamic allocation in heap
    
    Hero *b = new Hero;
    b->setLevel('A'); 
    (*b).health =70; 
    
     cout << "health is: " << b->health << endl;
                //or
   // cout << " health is " < b->getHealth() < endl;

    cout << "level is: " << (*b).getLevel()<<endl;
      //or
   // cout << "level is" << b->getLevel()<< endl;

    delete (b);
   
    cout<<endl;
    return 0;
}