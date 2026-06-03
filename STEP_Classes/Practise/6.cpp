// Hashing of a string 


#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s;
    cin >> s;

    int hash[26] = {0};

    for(int i = 0; i < (int)s.length(); i++)
    {
        hash[s[i] - 'a']++;
    }

    for(int i = 0; i < 26; i++)
    {
        if(hash[i] > 0)
        {
            char ch = i + 'a';

            cout << ch << " is " << hash[i] << endl;
        }
    }

    return 0;
}