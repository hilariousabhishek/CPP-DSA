// Sum of array an Index of maximum sum

#include <iostream>
using namespace std;

int rowsum(int arr[][4], int row, int col){
    int sum;
    int ans=INT_MIN;
    int Index=-1;

    for(int i=0;i<row;i++){
        sum =0;
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
            sum+=arr[i][j];
    }
    cout<<"|"<<sum<<endl;  
    if(sum>=ans){
        sum=ans;
        Index=row;
    }
    }

return Index;
}

int colsum(int arr[][4], int row, int col){
  int sum;

    for(int i=0;i<col;i++){
        sum =0;
        for(int j=0;j<row;j++){
            cout<<arr[j][i]<<" ";
            sum+=arr[j][i];
    }
      cout<<"|"<<sum<<endl;  
    }
return sum;
}



int main()
{
    int arr[3][4]={{199,2,3,4},{5,6,7,8},{9,8,7,6}};
    cout<<"\n"<<endl;
    rowsum(arr,3,4);
    cout<<"\n"<<endl;
    colsum(arr,3,4);
    cout<<"\n"<<endl;


    return 0;
}