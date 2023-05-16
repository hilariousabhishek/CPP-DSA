#include<iostream>
using namespace std;

int factorial(int n){

     int i=1;
     int fact=1;
     while(i<=n){
        fact=fact*i;
         i++;
     }
    return fact;
}

int nCr(){
    int n, r;
    cin>>n>>r;

    int num = factorial(n);

    int deno= factorial(r)*factorial(n-r);

    int ans =num/deno;
    return ans;
}

int main(){
 cout<<nCr();
    return 0;
 }
 