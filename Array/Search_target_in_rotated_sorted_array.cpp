#include<iostream>
using namespace std;

int searchPivot(int arr[],int size){
    int s=0;
    int e=size;
    int mid = s+(e-s)/2;

    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid = s+(e-s)/2;
    }
   
return s;
}


//Binary Search
int binarySearch(int arr[],int s,int e, int key){
     int start=s;
     int end=e;
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

cout<<"Target not found"<<" ";
     return -1;
}


int main()
{
    int arr[7]={4,5,6,7,0,1,2};
    int target = 1;


    cout<<"pivot Index is:"<<searchPivot(arr,7)<<endl;
    int a=searchPivot(arr,7);

    if(target>=arr[a] && target<=7){
    
        cout<<"Target Index is:"<<binarySearch(arr,4,7,target);
    }
    else{
        cout<<"Target Index is:"<<binarySearch(arr,0,4,target);
    }
    
   
return 0;
}