// Print like a wave

#include <iostream>
using namespace std;

void print(int arr[][4], int row, int col)
{
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 2};
    cout << endl;
    print(arr, 3, 4);
    cout << endl;


//row-wise
    for (int col = 0; col < 4; col++)
    {
        if (col & 1)
        {
            // odd Index -> Bottom to top
            for (int row = 2; row >= 0; row--)
            {
                cout << arr[row][col] << " ";
            }
        }
        else
        {
            // 0 or even iondex -> top to bottom
            for (int row = 0; row < 3; row++)
            {
                cout << arr[row][col] << " ";
            }
        }
        cout<<endl;
    } cout<<endl;

//Column-wise
 for (int i = 0; i < 3; i++)
    {
        if(i&1){
            for (int j = 3; j >= 0; j--)
        {
            cout << arr[i][j] << " ";
        }
        }
        else
        {
            for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        }
    
    }

    return 0;
}
