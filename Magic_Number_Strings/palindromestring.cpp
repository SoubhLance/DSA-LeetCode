//palindrome string
// a string which is same when read from left to right and right to left
// "madam" → Palindrome ✅


#include<iostream>
#include<string>
using namespace std;

void palindrome(string s)
{
    //reverse the string
    string rev = "";
    for(int i=s.length()-1; i>=0; i--)
    {
        rev+=s[i];
    }

    if(rev==s)
    {
        cout<<s<<" is a palindrome string"<<endl;
    }
    else
    {
        cout<<s<<" is not a palindrome string"<<endl;
    }
}


int main()
{
    string s;
    cout<<"Enter the string: ";
    cin>>s;

    palindrome(s);
    return 0;
}