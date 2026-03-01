// Duck Number 
// Duck numbers are numbers that contain at least one zero in them. only the 1st letter should be 0 
// for example, 3210 is a duck number because it contains a zero, but 0123 is not a duck number because the first digit is zero.

#include<iostream>
using namespace std;

int duck(int n)
{
    if (n==0)
    {
        return 0;
    }
    while(n>0)
    {
        int last_digit=n%10;
        if(last_digit==0)
        {
            return 1;
        }
        else
        {
            n=n/10;
        }
    }
    return 0;
}

int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    if (duck(n))
    {
        cout<<n<<" is a duck number"<<endl;
    }
    else
    {
        cout<<n<<" is not a duck number"<<endl;
    }
}