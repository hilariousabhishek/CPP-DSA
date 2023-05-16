#include <iostream>
using namespace std;

int main() {

    int n;
    cout<<"Enter year: ";
    cin>>n;
    if (n==0){
        cout<<"Enter a valid year! ";
    }

else{
    if(n%100==0  && n%400==0){
        cout<<"The given year is a leap year";
    }
    else if(n%100==0){
        cout<<"The given year is not a leap year";
    }
    else if (n%4==0){
        cout<<"The given year is a leap year";
    }
    else 
    cout<<"The given year is not a leap year";
    }

    return 0;
}