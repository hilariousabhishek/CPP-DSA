#include<iostream>
using namespace std;


int main(){

    int arr[5]={3,2,2,5,4};

// //selection sort

//     for(int i=0;i<5;i++){
//         for(int j=i+1;j<5;j++){
//             if(arr[i]>arr[j]){
//                 swap(arr[i],arr[j]);
//             }
//         }
//     }


// //bubble sort
// for(int i=0;i<5;i++){
//     for(int j=0;j<5;j++){
//         if(arr[j]>arr[j+1]){
//             swap(arr[j],arr[j+1]);
//         }
//     }
// }


//insertion sort
for(int i=0;i<5;i++){
    int temp=arr[i];

    int j=i-1;
    while(arr[j]>arr[i] && j>=0){
        arr[j+1] = arr[j];
        j--;
    }
    arr[j+1]=temp;
}

//output
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    

    return 0;
}