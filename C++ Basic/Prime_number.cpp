#include<iostream>
using namespace std;

//prime-> return 1
//not prime -> return 0

bool isPrime(int n){
 
 int i=2;
 while(i<n){
  if (n%i==0){
    return 0;
  }
  i++;
 }

 return true;
}

int main(){
 
 int n;
 cout<<"Check your number:";
 cin>>n;

 int answer= isPrime(n);
 cout<<answer<<"\n";
cout<<endl<<"0 means not prime"<<endl<<"1 means prime "<<endl<<" ";
    return 0;
 }
 