#include <iostream>
using namespace std;


//Binary search
int binarySearch(int arr[],int size, int key){
     int start=0;
     int end=size-1;
     int mid=start+(end-start)/2;

// jab taj start, end se kam ya equal hai.. do while loop

     while(start<=end){
        if(arr[mid]==key){
            return mid;
        }

//Go to right part
        if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
//Loop update...
        mid=start+(end-start)/2;
     }


     return -1;
}

int main() {

    int even[6]={2,4,6,8,12,18};
    int odd[5]={3,8,11,14,16};


    int indexEven=binarySearch(even,6,12);
    cout<<"Index of 12 is "<<indexEven<<endl;

    int indexOdd=binarySearch(odd,5,8);
    cout<<"Index of 8 is "<<indexOdd<<endl;

    return 0;
}
