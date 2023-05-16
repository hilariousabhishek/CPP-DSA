#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    int ans=0;
    int i=0;
    cin>>n;

    while(n!=0){
        int digit = n&1;
        n=n>>1;
        ans= (digit*pow(10,i))+ans;
        
        i++;
    }
   
   cout<<ans;
   
   cout<<endl;
    return 0;
}