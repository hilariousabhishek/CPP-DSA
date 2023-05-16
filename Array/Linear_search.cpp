#include <iostream>
using namespace std;

//Linear search function
bool search(int arr[],int size,int key){

    for (int i=0;i<size;i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}

int main() {
    int arr[10]={3,-1,2,55,4,3,2,1,0,12};

    cout<<"Enter the element to search: ";
    int key;
    cin>>key;

    bool found = search(arr,10,key);
    if (found==1){
        cout<< "Key is present.";
    }
    else{
        cout<<"Key is absent.";
    }
    return 0;
}