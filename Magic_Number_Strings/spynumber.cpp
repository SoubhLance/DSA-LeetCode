// Spy Number 
// Spy number = sum of digits == product of digits
// 1124
// Sum = 1+1+2+4 = 8
// Product = 1*1*2*4 = 8
// → Spy ✅


#include<iostream>
using namespace std;

int spy(int n)
{
    int sum=0;
    int prod=1;
    int temp1=n;
    while(temp1>0)
    {
        int last_digit=temp1%10;
        sum+=last_digit;
        prod*=last_digit;
        temp1=temp1/10;
    }

    if(sum == prod)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}

int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    if (spy(n))
    {
        cout<<n<<" is a spy number"<<endl;
    }
    else
    {
        cout<<n<<" is not a spy number"<<endl;
    }
}