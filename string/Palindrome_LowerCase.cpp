//char array palindrome ignoring case sensitivity

#include <iostream>
using namespace std;

//getting string length
int stringLength(char a[]){
    int count =0;
    for(int i=0; a[i]!='\0'; i++){
        count++;
    }
return count;
}


//Check string palindrome
bool check_string_palindrome(char name[],int length){
    int s=0,e=length-1;

    while(s<e){
        if(name[s]!=name[e]){
            return false;
        }
        else{
             s++;
            e--;
        }
        }
      
            return true;
}

//Making uppercase to lowercase
char toLowercase(char ch){
    if(ch>='a' && ch<='z'){
        return ch;
    }else{
        return ch-'A'+'a';
    }
}

int main()
{
    char name[20];
    cout << "Enter your name: ";
    cin >> name;
    cout<< "Your name is: "<<name <<endl;

    int count=stringLength(name);
    // cout << "Length of name is: "<<count <<endl;
 

    if(check_string_palindrome(name,count)== 0){
        cout<<"Your name is not a palindrome"<<endl;
    }else{
        cout<<"Your name is a palindrome"<<endl;
    }

//to Lowercase
cout<<endl;
cout<< "Your name is: ";
for (int i = 0; i < count; i++)
{
cout<<toLowercase(name[i]);
}


    return 0;
}