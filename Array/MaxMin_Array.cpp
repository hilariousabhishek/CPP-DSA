#include <iostream>
using namespace std;

// Max function
int getMax(int num[], int n)
{

    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {

        // using max functin
        maxi = max(maxi, num[i]);

        // if(num[i]>max){
        // max=num[i];
        // }
    }
    return maxi;
}

// Min functionint
int getMin(int num[], int n)
{

    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (num[i] < min)
        {
            min = num[i];
        }
    }
    return min;
}

int main()
{
    int size;
    cin >> size;

    int num[100];
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }

    cout << "The maximum value of Array is: " << getMax(num, size) << endl;
    cout << "The minimum value of Array is: " << getMin(num, size) << endl;
    return 0;
}