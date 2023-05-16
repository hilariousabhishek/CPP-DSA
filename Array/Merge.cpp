#include <iostream>

using namespace std;

// merge
void merge(int arr1[], int size1, int arr2[], int size2, int arr3[])
{
    int i = 0;
    int j = 0;
    int k = 0;

    while (i < size1 && j < size2)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k] = arr1[i];
            k++;
            i++;
        }
        else
        {
            arr3[k] = arr2[j];
            k++;
            j++;
        }
    }

    while (i < size1)
    {
        arr3[k] = arr1[i];
        k++;
        i++;
    }

    while (j < size2)
    {
        arr3[k] = arr2[j];
        k++;
        j++;
    }
}

// Print
void print(int arr3[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr3[i] << " ";
    }
}

int main()
{
    int arr1[5] = {1, 3, 5, 7, 9};
    int arr2[3] = {2, 4, 6};
    int arr3[8] = {0};

    merge(arr1, 5, arr2, 3, arr3);
    print(arr3, 8);

    return 0;
}