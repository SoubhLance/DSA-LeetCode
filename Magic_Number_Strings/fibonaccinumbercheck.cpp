// Check if a number belongs to the Fibonacci sequence or not
// Fibonacci numbers are a sequence of numbers where each number is the sum of the two preceding ones, usually starting with 0 and 1.
// The sequence goes: 0, 1, 1, 2, 3, 5, 8, 13, 21, and so on.
// For example, 8 is a Fibonacci number because it appears in the sequence, while 10 is not a Fibonacci number because it does not appear in the sequence.


#include<iostream>
using namespace std;

int CheckFibonacci(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    int a=0;
    int b=1;
    for(int i=2; i<=n; i++)
    {
        int sum=a+b;
        if(sum==n)
        {
            return 1;
        }
        a=b;
        b=sum;
    }
    return 0;
}

int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    if (CheckFibonacci(n))
    {
        cout<<n<<" is a Fibonacci number"<<endl;
    }
    else
    {
        cout<<n<<" is not a Fibonacci number"<<endl;
    }
    return 0;
}