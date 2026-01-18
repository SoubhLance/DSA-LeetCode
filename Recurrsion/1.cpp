// print name 5 times

#include <iostream>
using namespace std;

int c = 0;

void name(string n)
{
    if (c == 5) return;   // base case

    cout << n << endl;
    c++;

    name(n);              // recursive call
}

int main()
{
    string n;
    cin >> n;

    name(n);
    return 0;
}
