// 2D array

#include <iostream>
using namespace std;

bool found(int arr[][4], int target){
      for (int row = 0; row < 3; row++)
    {
       for (int col = 0; col < 4; col++)
       {
        if(target==arr[row][col]){
            return true;
        }
       }
  
    }


return 0;
}

int main()
{
    int arr[3][4]={{1,11,111,1111},{2,22,222,222},{3,33,333,3333}};

    for (int row = 0; row < 3; row++)
    {
       for (int col = 0; col < 4; col++)
       {
        cout<<arr[row][col]<<" ";
       }
       cout<<endl;
    }cout<<endl;
 ////////////////////////////////   ----------------------------------------------------------------
 //searching a target
int target =5;

  if(found(arr,target)==1){
    cout<<"Found"<<endl;
  }else{
    cout<<"Not Found"<<endl;
  }   
// ------------------------------------------------------------------- //

    cout<<endl;
    int arr1[3][4];
    cout<<"Enter an array of 12 elements: "<<endl;

    for (int row = 0; row < 3; row++)
    {
       for (int col = 0; col < 4; col++)
       {
        cin>>arr1[row][col];
       }
    }

// ----------------------------------------------------------------
// (row*col)
cout<<endl;
    for (int row = 0; row < 4; row++)
    {
       for (int col = 0; col < 3; col++)
       {
        cout<<arr1[col][row]<<" ";
       }
       cout<<endl;
    }cout<<endl;

// ----------------------------------------------------------------
// (col*row)
 for (int row = 0; row < 3; row++)
    {
       for (int col = 0; col < 4; col++)
       {
        cout<<arr1[row][col]<<" ";
       }
       cout<<endl;
    }cout<<endl;


    return 0;
}