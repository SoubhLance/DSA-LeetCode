// // Palindrome Number


#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int x=n;
    int rev=0;
    int last;
    while(n!=0)
    {
        last=n%10;
        n=n/10;
        rev=(rev*10)+last;
    }
    if(rev==x)
    {
        cout << "it is palindrome";
    }
    else
    {
        cout << "Not a palindrome";
    }
    return 0;
}