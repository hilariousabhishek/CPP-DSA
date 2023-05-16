#include <iostream>
#include <vector>
#include <algorithm>
#include <array>
// Let rotation is to be done for k times.
using namespace std;

int main()
{
    array<int, 4> a = {9, -2, 3, 9};
    array<int, 4> b = {1, 2, 3, 4};
    int n = a.size();
    int m = b.size();

    int i = n - 1;
    int j = m - 1;
    int carry = 0;
    vector<int> ans;

    while (i >= 0 && j >= 0)
    {
        int val1 = a[i];
        int val2 = b[j];
        int sum = val1 + val2 + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
        j--;
    }

    // first case
    while (i >= 0)
    {
        int sum = a[i] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
    }
    // second case
    while (j >= 0)
    {
        int sum = b[j] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        j--;
    }

    // Third case
    while (carry != 0)
    {
        int sum = carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
    }

    
    //Reverse
    int s=0;
    int e=ans.size()-1;
    while (s<e)
    {
        swap(ans[s++], ans[e--]);
    }
    
    // print (ans);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}