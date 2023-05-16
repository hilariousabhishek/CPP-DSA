#include <iostream>
using namespace std;

void update(int **p2){
//p2 = p2 + 1;
//kuch change hoga- NO

//*р2 = *р2 + 1;
//kuch change hoga - YES

**p2 = **p2 + 1;
//kuch change hoga - YES
}

int main()
{
int i = 5;
int* p = &i;
int** p2 = &p;

// cout << endl<< i << endl; 
// cout << *p << endl; 
// cout << **p2 << endl<< endl;

// cout << &i << endl; 
// cout << p << endl; 
// cout << *p2 << endl<< endl;

// cout << &p << endl; 
// cout << p2 << endl<< endl;

cout<< "before " << i << endl; 
cout<< "before " << p << endl; 
cout<< "before " << p2 << endl; 
update (p2);
cout<< "after " << i << endl; 
cout<< "after " << p << endl; 
cout<< "after " << p2 << endl;

    return 0;
}