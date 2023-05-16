#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    cout<<endl;
    
    if(n<=26) {
        char a='A';
        
        int j=1;
        while(j<=n){
            cout<<a<<endl;
            j++;
            a++;
        }
        
    }
    else{
    cout<<"Please enter a value upto 26.";
    }

    return 0;
}