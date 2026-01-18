//. print linearly from 1 to n
#include <iostream>
using namespace std;

int c = 0;

void print(int n)
{
    if (c == n) return;

    c++;
    cout << c << endl;   // 🔥 missing line
    print(n);
}

int main()
{
    int n;
    cin >> n;
    print(n);
    return 0;
}
