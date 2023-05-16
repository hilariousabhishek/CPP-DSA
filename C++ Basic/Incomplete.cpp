#include <iostream>
#include <math.h>

using namespace std;
int main()
{

    int n;
    cout<<"Enter value of n:";
    cin >> n;
    int digit;
    int ans = 0;

    while (n != 0)
    {
        digit = n % 10;
        n = n / 10;
        ans = pow(2, digit) + ans;
    }


    cout <<"The value of 2^"<<digit<<" is: "<< ans << endl;

    return 0;
}