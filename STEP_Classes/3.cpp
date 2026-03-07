// Step 1: Character Encryption
// Convert every character in the text into a numeric value based on the following mapping:
// •	Lowercase letters:
// a = 1, b = 2, c = 3, ... , z = 26
// •	Uppercase letters:
// A = 27, B = 28, C = 29, ...
// •	Space = 0
// •	Full stop (.) = 99
// Example:
// COVID crisis →
// 29 41 48 35 30 0 3 18 9 19 9 19
// Level 1 – Basic Encryption
// 1.	Convert the entire text into encrypted digits using the rules above.
// 2.	Display the encrypted sequence.
// 3.	Calculate and display the sum of all encrypted digits.


#include <iostream>
#include<string>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

// Function to convert characters to encrypted digits 
void converting_to_encryted_digits(string s)
{
    vector<int> arr(s.length());
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]==' ')
        {
            arr[i]=0;
        }
        else if(s[i]=='.')
        {
            arr[i]=99;
        }
        else if(s[i]>='a' && s[i]<='z')
        {
            arr[i]=s[i]-'a'+1;
        }
        else if(s[i]>='A' && s[i]<='Z')
        {
            arr[i]=s[i]-'A'+27;
        }
    }
    //printing the encrypted digits
    for(int i=0; i<s.length(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    //calculating the sum of encrypted digits
    int sum=0;
    for(int i=0; i<s.length(); i++)
    {
        sum+=arr[i];
    }
    cout << "Sum of encrypted digits: " << sum << endl;




}

int main()
{
    string s;
    getline(cin, s);
    converting_to_encryted_digits(s);
    return 0;
}