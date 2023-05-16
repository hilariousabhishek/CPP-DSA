#include <iostream>
using namespace std;

//Reversing a string
void reverse(char a[], int size)
{
    int s=0;
    int e=size-1;
    while(s<e)
    {
       swap(a[s++], a[e--]);
    }
}


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
   cout<<"Length of your name is: "<< stringLength(name)<<endl;

    int size=stringLength(name);
   reverse(name,size);
    cout<<"Your name in reverse is: "<<name<<endl;

    return 0;
}