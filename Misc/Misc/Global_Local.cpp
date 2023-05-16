#include <iostream>
using namespace std;

// GLOBAL DECLARATION
int score = 15;

void a(int &i)
{
    cout << score << " in a" << endl;
    char ch = 'a';
    cout << i << endl;
  
}

int main()
{
    cout << score << " in main" << endl;
    int i = 5;
    a(i);
return 0;
}

//Generally a bad practice