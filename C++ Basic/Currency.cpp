#include <iostream>

using namespace std;

int main()
{
    int amount;
    cout << "Enter Amount : " ;
    cin >> amount;
    cout<< endl;

    int a;

    // 1251
    int Rs100, Rs50, Rs20, Rs1;

    switch (a)
    {
    case 1:
        Rs100 = amount / 100;
        cout << "Rs100 : " << Rs100 << endl;
        amount = amount % 100;

    case 2:
        Rs50 = amount / 50;
        cout << "Rs50 : " << Rs50 << endl;
        amount = amount % 50;

    case 3:
        Rs20 = amount / 20;
        cout << "Rs20 : " << Rs20 << endl;
        amount = amount % 20;

    case 4:
        Rs1 = amount / 1;
        cout << "Rs1 : " << Rs1 << endl;

        break;
    }

    return 0;
}