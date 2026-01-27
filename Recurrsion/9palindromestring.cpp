//Palindrome String 
// LeetCode 125

#include<iostream>
using namespace std;

bool is_palindrome(string text)
{
    for (int i=0;i<text.length()/2;i++)
        if (text[i]!=text[text.length()-1-i])
            return false;
    return true;
}

int main()
{
    string text1;
    cin>>text1;
    if (is_palindrome(text1))
        cout<<text1<<"-> is a Palindrome String"<<endl;
    else
        cout<<text1<<"-> is Not a Palindrome String"<<endl;
}