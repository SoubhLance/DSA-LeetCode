// 1
// 12
// 123
// 1234
// WAP to print the pattern 



#include<iostream>
using namespace std;

int main()
{
    int n;
    printf("Enter the number of the Rows");
    cin>>n;
    for( int i=1; i<=n;i++)
    {
        for(int j = 1; j<=i;j++)\
        {
            cout<<(j);
        }
        cout<< endl;
    }
}
