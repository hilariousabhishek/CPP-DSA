#include <iostream>
using namespace std;

//start gives the default value of 0
//one can assign default values starting from end 
void print(int arr[], int n, int start = 0)
{
    for (int i = start; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}

int main()
{
    int arr[5] = {1, 4, 7, 8, 9};
    int size = 5;
    print(arr, size);
    cout << endl;
    print(arr, size, 2);
    return 0;
}