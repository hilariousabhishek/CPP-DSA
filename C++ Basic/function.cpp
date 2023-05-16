#include<iostream>
using namespace std;

//function signature
int power(){
// function body
int a,b;
cin>>a>>b;

int i=1;
int ans=1;
 while(i<=b){
 ans=ans*a;
 i++;
 }

return ans;
}


int main(){
 //function call
 int answer= power();
 cout<<answer;

cout<<endl<<power();

    return 0;
 }
 