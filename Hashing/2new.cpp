#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    
    int hash[256] = {0};

    for(int i = 0; i < s.size(); i++)
    {
        hash[s[i]]++;   // correct indexing
    }

    int q;
    cin >> q;

    while(q--)
    {
        char c;
        cin >> c;
        cout << "the frequency of character "
             << c << " is "
             << hash[c] << endl;
    }

    return 0;
}
