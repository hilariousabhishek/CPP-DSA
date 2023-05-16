//Applicable on sorted and rotated array
#include <iostream>
using namespace std;

int pivot(int arr[],int size){
    int s=0;
    int e =size-1;
    int mid =s+(e-s)/2;

    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
     mid =s+(s-e)/2;   
    }

return s;
}

void print(){
    cout<<endl<<endl<<"cool";
}

int main() {
    int arr[5]={8,10,17,1,3};
    cout<<pivot(arr,5);
    print();
    return 0;
}