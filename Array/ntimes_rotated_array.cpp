#include <iostream>
// Let rotation is to be done for k times.
using namespace std;

int main()
{
    int nums[7] = {7, 1, 2, 3, 4, 5, 6};
    int k = 3;
    // Simple step counter
    int step = 1;

    // Original Array
      cout << endl;
    cout << "Original Array: ";
    for (int i = 0; i < 7; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl<<endl;
  

    // Rotated Array

    while (k != 0)
    {
        int tmp = nums[6];
        for (int i = 6; i >= 0; i--)
        {
            nums[i + 1] = nums[i];
        }
        nums[0] = tmp;
        k--;

        // Output Array Each STEP
    cout << "Output step "<<step << ":"<<" ";
        for (int k = 0; k < 7; k++)
        {
            
            cout << nums[k] << " ";
        }
        cout << endl;
                step++;
    }

    // Output Array
    cout << endl;
    cout << "Final Output Array: ";
    for (int i = 0; i < 7; i++)
    {
        cout << nums[i] << " ";
    }cout << endl<<endl;
  
    return 0;
}