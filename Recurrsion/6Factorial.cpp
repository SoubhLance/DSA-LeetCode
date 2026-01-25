//Factorial of a number 

#include<iostream>
using namespace std;

long long  factorial(int n)
{
    if(n<=1)
    {
        return 1;
    }
    return n * factorial(n-1);
}


int main()
{
    int number;
    long long result;
    cout << " Enter the non negative number " <<endl;
    cin>>number;
    result = factorial(number);
    cout<<number<<"!="<<result;
    return 0;
}