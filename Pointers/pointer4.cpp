//using character array,functions in a pointer
#include <iostream>
using namespace std;

void print(int *p){
    cout<<*p<<endl;
}

void update(int *p){
    // p=p+1;
    // cout<<"inside"<<p<<endl;
    *p=*p+1;
}

int getSum(int *arr,int n){
// *arr or arr[] both are same and a address
    cout<<endl<<"size of arr[]:"<<sizeof(arr)<<endl;
    
    int sum=0;
    for(int i=0;i<n;i++){
        //i[arr] =arr[i] both are same
        sum+=i[arr];
    }//also arr[i] is same as *(arr+i)
    return sum;
}

int main()
{
    int arr[8] = { 1, 2, 3, 4, 5, 6, 7, 8,};
    char ch[6] = "abcde";
    
    int *p=&arr[0];
    cout<<p<<endl;
    cout<<arr<<endl;
    cout<<ch<<endl;

    char *c=&ch[0];
//prints the entire string
    cout<<c<<endl;
    
    char temp='z';
    char *ptr=&temp;
//will print any rubbish after z until it gets a null charchter
    cout<<ptr<<endl;

    print(p);
    update(p);
    print(p);

    cout<<"sum is:"<<getSum(arr,8)<<endl;
    return 0;
}