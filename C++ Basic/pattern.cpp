#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    cout<<"Enter the value of N:"<<endl;

    int i=1;
    while(i<=n){ 
 
        // first triangle
        int j=1;
        while(j<=(n-i+1)){
            cout<<j;
            j++;
        }

        //star
        int k=1;
        while(k<=(i-1)*2){
            cout<<"*";
            k++;
        }

        //final star
        int l=1;
        int a=(n-i+1);
        while(l<=(n-i+1)){
            cout<<a;
            l++;
            a--;
        }

        cout<<endl;
        i++;
    }

    return 0;
}