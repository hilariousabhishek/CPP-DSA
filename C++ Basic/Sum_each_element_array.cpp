#include <iostream>
using namespace std;

int sum(int num[], int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans+num[i];
    }
    return ans;
}

int main() {
    int size;
    cin>>size;
    cout<<endl;

    int num[100];
    for(int i=0;i<size;i++){
        cin>>num[i];
    }

cout<<endl<<"The sum of all the elements of the array is "<<sum(num,size);
    return 0;
}