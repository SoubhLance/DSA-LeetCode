//Fibonacci Number 
// Fibonacci numbers are a sequence of numbers where each number is the sum of the two preceding ones, usually starting with 0 and 1.
// The sequence goes: 0, 1, 1, 2, 3, 5, 8, 13, 21, and so on.
//wap a program to find the nth fibonacci number

#include<iostream>
using namespace std;

int fibonacci(int n)
{
    if(n==0)
    {
        return 0;
    }
    int a=0;
    int b=1;
    for(int i=2;i<=n;i++)
    {
        int sum=a+b;
        a=b;
        b=sum;
    }
    return b;
}

int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    cout<<"The "<<n<<"th fibonacci number is: "<<fibonacci(n)<<endl;
    return 0;
}