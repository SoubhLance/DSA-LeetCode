//WAP to generate a fibonacci series up to n terms and print the sum of the series.
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    if(n >= 1)
        cout << 0 << " ";

    if(n >= 2)
        cout << 1 << " ";

    int a = 0;
    int b = 1;

    for(int i = 3; i <= n; i++)
    {
        int sum = a + b;
        cout << sum << " ";
        a = b;
        b = sum;
    }

    return 0;
}