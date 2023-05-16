#include <iostream>
using namespace std;

//Class is kind of templete used in making a user defined data type
class Hero{
    private:
    int health;

    public:
    int level;

    //copy constructor khud se bhi call kar sakte hai
    Hero (Hero& temp){
    cout << "Copy constructor called" << endl;
    this->health = temp.health;
    this->level=temp.level;
    }
 
    Hero(int health, char level) {
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
   
  Hero S(70, 'C');
  S.print () ;

  cout<<endl;
  //Copy constructor Auto call
  Hero R(S) ;
  R.print();
   


    return 0;
}