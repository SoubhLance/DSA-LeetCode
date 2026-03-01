// Armstong Number 
// armstrong numbers are those numbers whose sum of the cubes of their digits is equal to the number itself.
// For example, 153 is an armstrong number because 1^3 + 5^3 + 3^3 = 153.

#include<iostream>
#include<cmath>
using namespace std;


//calcutaing the armstrong number
int armstrong(int n)
{
    //counting the number of digits
    int count=0;
    int sum=0;
    int temp=n;

    while(temp>0)
    {
        int last_digit=temp%10;
        count++;
        temp=temp/10;
    }

    int temp2=n;
    while(temp2>0)
    {
        int last_digit=temp2%10;
        sum+=(int)round(pow(last_digit,count));
        temp2=temp2/10;
    }

    //cheking the sum of the power of the digits is equal to the number itself or not
    if(sum==n)
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
    if(armstrong(n))
    {
        cout<<n<<" is an armstrong number"<<endl;
    }
    else
    {
        cout<<n<<" is not an armstrong number"<<endl;
    }
}