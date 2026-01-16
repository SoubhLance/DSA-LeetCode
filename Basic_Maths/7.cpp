//GCD Calculation

#include<iostream>
#include<stdlib.h>
using namespace std;


int gcd(int x, int y)
{
    while(y!=0)
    {
        int rem = x%y;
        x=y;
        y=rem;
    }
    return x;
}

int main()
{
    int a,b;
    cin>>a>>b;
    int divisor = gcd(a,b);
    cout << divisor;
    return 0;
}