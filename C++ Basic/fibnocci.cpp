
 #include<iostream>
using namespace std;
 int main(){

    int n;
    cin>>n;
    int a =0;
    int b =1;
    int final;

    cout<<endl;
    cout<<a<<" "<<","<<b<<" "<<",";
    
    int i=1;
    while(i<n){
    int sum = a+b;
    cout<<sum<<","<<" ";
    a=b;
    b=sum;
    i++;
    final=sum;
    }
    
    cout<<endl<<endl<<"The last digit is:"<<final;

    return 0;
 }