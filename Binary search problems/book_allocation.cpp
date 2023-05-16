/*In array of number of pages of a book 'n'=4 repersent no of books and
the array values repersents no pages of the book.

There is 'm' students thatneeds to be allocated in a such a way that 
each book should be allocated to each of the students such that no 
student or book is left. 

you have to allocate the book to 'm'=2 students such that the maximum no 
of pages assigned to a student is minimum of them all. */

#include<iostream>
using namespace std;

bool isPossible(int arr[],int n,int m,int mid){
    int pageSum=0;
    int studentCount=1;

    for(int i=0;i<n;i++){
        if(pageSum +arr[i]<=mid){
            pageSum=pageSum+arr[i];
        }
        else{
            studentCount++;
            if(studentCount>m||arr[i]>mid){
                return false;
            }

            pageSum=arr[i];
        }
    }
return true;
}

int main()
{
    int bookArr[4]={10,20,30,40};
    int sum =0;

    for(int i=0;i<4;i++){
    sum=sum+bookArr[i];
}

    int s=0;
    int e=sum;
    int mid= s+(e-s)/2;
    int ans =0;

    while(s<=e){
        if(isPossible(bookArr,4,2,mid)==true){
            ans=mid;
            e=mid-1;
        }else{
            s=mid+1;
        }
    }


return 0;
}

// Code studio question