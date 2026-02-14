// Character Hashing and calculating the term frequency

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    
    //precompute
    int hash[26]={0}; //hashing array to store the frequency of each character
    for(int i=0; i<s.size(); i++)
    {
        hash[s[i]-'a']++; //increment the frequency of the character in the hash array
    }

    int q;
    cin >> q;
    while (q--)
    {
        char c;
        cin >> c;
        //fetch the frequency of the character c from the hash array and print it
        cout <<"the frequency of character " << c << " is " <<hash[c-'a'] << endl;
    }
    
    return 0;
}