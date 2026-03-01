// Happy Number Definition
// Process:
// Number ke digits ka square sum lo
// Naya number bana lo
// Phir same process repeat karo
// Agar eventually 1 mil gaya → Happy number
// Agar loop me fas gaya → Not happy
// 19
// 1² + 9² = 82
// 8² + 2² = 68
// 6² + 8² = 100
// 1² + 0² + 0² = 1
// → Happy ✅

#include<iostream>
using namespace std;

int happy(int n)
{

}

int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    if (happy(n))
    {
        cout<<n<<" is a happy number"<<endl;
    }
    else
    {
        cout<<n<<" is not a happy number"<<endl;
    }
    return 0;
}