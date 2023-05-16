#include<iostream>
using namespace std;

//Binary search
long long int Integer(int n){
    int s=0;
    int e=n;
  long long int mid=s+(e-s)/2;
 
    while(s<=e){
        
        if(mid*mid==n){
            return mid;
        }
        else if(mid*mid>n){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
         mid=s+(e-s)/2;
    }
    
return -1;

}

double morePrecision(int n, int precision,int temp){
    double factor=1;
    double ans= temp;

    for (int i = 0; i < precision; i++)
    {
        
        factor=factor/10; 
        for (double j =temp; j*j < n; j=j+factor)
        {
           ans=j;
        }
        
    
    }
    return ans;
}



int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    int temp =Integer(n);
    cout<<"Answer is "<<morePrecision(n,3,temp);
  
return 0;
}