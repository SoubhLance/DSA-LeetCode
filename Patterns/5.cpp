// ******
// *****
// ****
// ***
// **
// *
// WAP to print the pattern 



#include<iostream>
using namespace std;

int main()
{
    int n;
    printf("Enter the number of the Rows");
    cin>>n;
    for( int i=0; i<=n;i++)
    {
        for(int j = 1; j<n-i+1;j++)\
        {
            cout<<j;
        }
        cout<< endl;
    }
}
