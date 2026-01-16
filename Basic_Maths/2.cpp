#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int reverse(int n)
{
    int rev=0;
    while(n>0)
    {
        int k=n%10;
        n=n/10;
        rev = (rev*10)+k;
    }
    return rev;
    cout << rev;
}

int main()
{
    int n;
    cout << "Enter the Numer";
    cin >> n;

    cout << reverse(n);
    return 0;
} 