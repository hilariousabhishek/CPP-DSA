// Time complexity--
// n(n-1)/2 viz O(n^2)

// Space Complexity --
// O(1)

#include<iostream>
using namespace std;

int main()
{
    int arr[5]={3,2,2,5,4};

    for (int i = 1; i <5; i++)
    {
        for(int j=0;j<5-i;j++){
            if(arr[j]>arr[j+1]){              
                swap(arr[j],arr[j+1]);
            }
        }
    }
    
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
return 0;
}