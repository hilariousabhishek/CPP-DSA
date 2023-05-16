#include <iostream>
using namespace std;

//inline works same as define just replaces the code whenever it is called
// i.e. no need of extra space
// but works only when function has fewer lines

inline int getMax(int &a, int &b)
{
    //using ternery operator 
    //if true than a, if false then b
    return (a > b) ? a : b;
}

int main()
{
    int a = 1, b = 2;
    int ans = 0;
    ans = getMax(a, b);
    cout << ans << endl;
    a = a + 3;
    b = b + 1;
    ans = getMax(a, b);
    cout << ans << endl;

    return 0;
}