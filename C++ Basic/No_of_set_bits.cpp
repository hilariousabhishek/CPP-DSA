#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin>>a>>b;
    
    int count=0;
    for(int i=1;i<=32;i++){
        if((a&1)==1){
            count++;
        }
        a=a>>1;
    }

    for(int j=1;j<=32;j++){
        if((b&1)==1){
            count++;
        }
        b=b>>1;
    }

    cout<<count;
    return 0;
}