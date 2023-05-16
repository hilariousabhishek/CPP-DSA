#include <iostream>
using namespace std;

//using pass by value in function
int getSum(int *arr, int n) {
    int sum = 0;
    for(int i=0; i<n; i++) { 
        sum += arr[i];
    }

return sum;
}

//using dynamic memory allocatin[Heap] to create an array in static mem[stack]
int main() {
    int n;
    cin >> n;
    // variable size array
    int *arr = new int[n];
    // takign inputn in aray
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans = getSum(arr, n);
    
    cout<<"The sum is: "<<ans;
//deletes the allocated memory of dynamic memory 
//state memory delete itself at the end of the program while dynamic doesn't 
    delete [] arr;
return 0;
}