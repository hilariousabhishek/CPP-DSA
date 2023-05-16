#include <iostream>
using namespace std;

//getting string length
int stringLength(char a[]){
    int count =0;
    for(int i=0; a[i]!='\0'; i++){
        count++;
    }
return count;
}


int main()
{
    char name[20];
    cout << "Enter your name: ";
    cin >> name;
    //name[2] = '\0';

    cout<< "Your name is: "<<name <<endl;
   cout<< stringLength(name);

    return 0;
}