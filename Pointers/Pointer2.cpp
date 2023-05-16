#include <iostream>
using namespace std;

int main()
{

/* Print same value */

    int i = 5;
    int *q = &i;
    cout << q << endl;
    cout << *q << endl;

    int *p = 0;
    p = &i;
    cout << p << endl;
    cout << *p << endl;

    cout<<endl;
    int num =5;
    int *a=&num;

    cout<<"before: "<<num<< endl;
    (*a)++;
     cout<<"After: "<<num<< endl;

    //  //copying a pointer
    // int *q = p;
    // cout << p <<" - " << q << endl; 
    // cout << *p <<" - " << *q<< endl;

    //Concept
    cout<<endl<<"Concept" <<endl;
    (*q)++;
    cout<<*q<<endl;

    q=q+1;
    //It will add 4 byte and goes to next location-- Next array 
    cout<<q<<endl;
    
   
    return 0;
}