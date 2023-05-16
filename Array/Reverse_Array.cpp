#include <iostream>
using namespace std;


void reverse(int arr[],int size){

    int start=0;
    int end= size-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        end--;
        start++;
    }
}

/*void reverse(int arr[],int size){
    for(int i=0;i<=size-1;i++){
        swap(arr[i],arr[(size-1)-i]);
    }
}
*/

void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
       
    }
}

int main() {
    int arr[6]={2,3,1,6,3,0};
    int brr[5]={3,-9,87,4,6};

    reverse(arr,6);
    reverse(brr,5);

    printArray(arr,6);
     cout<<endl;
     cout<<endl;
    printArray(brr,5);
    
    return 0;
}