#include <iostream>
using namespace std;

int main()
{
    int num=5;
    cout<<num<<endl;;

//Printing address of num using &
//address is in hexadecimal(0-9 + A-F)

    cout<<"Address of num is "<<&num<<endl;

//Pointers stores address
// never use *ptr alone.. use with =
//size fo pointer is always 8

    int *ptr=&num;
    cout<<*ptr<<endl<<endl;

    double d=4.3;
    double *ptr2= &d;

    cout<<"Address is: "<<ptr2<<endl;
    cout<<"Value is: "<<*ptr2<<endl;

    cout<<sizeof(num)<<endl;
    cout<<sizeof(ptr2)<<endl;
    cout<<sizeof(ptr2)<<endl;

    int **ptr3=&ptr;
    cout<<*ptr3<<endl<<endl;

     
     

    return 0;
}