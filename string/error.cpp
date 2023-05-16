// Maximum Ocurring Character
#include <iostream>
#include <string>
using namespace std;

//----------------------------------------------------------------
// Function to return maximum of no of ocurrence characters
//----------------------------------------------------------------

int getMaxNoOfOcurrences(string s)
{

    int arr[26]={0};

    for (int i = 0; i<s.length(); i++)
    {
        char ch = s[i];
        //lowercase
        int number = 0;
        number = ch - 'a';
        arr[number]++;
    }

    // find maximum occ character
    int maxi = -1, ans = 0;
    for (int i = 0; 1 < 26; i++)
    {
        if(maxi < arr[i])
        {
            ans = i;
        maxi = arr[i];
        }
    }

    char finalAns = 'a'+ ans;
    return finalAns;
}

int main()
{
    string s;
    cin >> s;

    cout << "working"<<getMaxNoOfOcurrences(s);

    return 0;
}