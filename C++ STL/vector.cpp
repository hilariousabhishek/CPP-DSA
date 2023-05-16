#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> v;

// 5 elements with each value being 100
    vector<int> abhi(5,100);

    cout << "Capacity-> " << v.capacity() << endl;

    v.push_back(1);
    cout << "Capacity-> " << v.capacity() << endl;
    
    v.push_back(2);
    cout << "Capacity-> " << v.capacity() << endl;
   
    v.push_back(3);
    cout << "Capacity-> " << v.capacity() << endl;
   
    cout << "Size-> " << v.size() << endl;
    cout << "'Element at 2nd Index" << v.at(2) << endl;
    cout << "front " << v.front() << endl;
    cout << "back " << v.back() << endl;
   cout<<endl;


    cout << "before pop" << endl;
    for (auto i : v)
    {
    cout << i << " ";
    }cout << endl;
    
    v.pop_back();
    cout << "after pop" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
cout<<endl;


    cout<< endl;
    //Capacity does not become zero only size 0
    cout << "before clear" <<v.size()<< endl;
    v.clear();
    cout << "after clear" <<v.size()<< endl;
    
    //vector <int> a(size,element)
    //another vector declaration

    vector<int> a(5,1);
    for (int i : a)
    {
        cout << i << " ";
    }
    cout<<endl<<endl;;

//copying vector elements
vector<int> last(a);
 for (int i=1;i<last.size();i++)
    {
        cout << last[i] << " ";
    }

//both side insertion/deletion

    return 0;
}