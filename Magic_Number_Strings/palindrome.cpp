//Palindrome NUmber 
//plaindrome is a number which is same when read from left to right and right to left
// 121 → Palindrome ✅

#include<iostream>
using namespace std;

int palindrome(int n)
{
    //reverse the string 
    int rev=0;
    int temp=n;
    while(temp>0)
    {
        int last_digit=temp%10;
        rev=rev*10+last_digit;
        temp=temp/10;
    }

    if(rev==n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    if (palindrome(n))
    {
        cout<<n<<" is a palindrome number"<<endl;
    }
    else
    {
        cout<<n<<" is not a palindrome number"<<endl;
    }
    return 0;
}