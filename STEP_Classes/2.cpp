//Calculating the prine number from 1 to 10000
// identifying the prime numbers those are ending with 9

#include <iostream>
using namespace std;

bool Prime(int n)
{
    if(n <= 1) return false;
    if(n == 2) return true;
    if(n % 2 == 0) return false;
    
    for(int i=3; i*i<=n; i+=2)
    {
        if(n%i==0)
        {
            return false;
        }    
    }
    return true;
}

void check(int n)
{
    for(int i=1; i<=n; i++)
    {
        if(Prime(i) && i%10==9)
        {
            cout << i << " ";
        }
    }
}

// printing un the list of 100 prime numbers those are ending with 9
// eg number of prime numbers from 0 to 99 ending with 9 are 5 19 29 59 79 
// eg number of prime numbers from 100 to 199 ending with 9 are 109 139 149 179 199 ......
void print_list_of_100(int n)
{
    int arr[n];
    for(int i=1;i<=n;i++)
    {
         if(Prime(i) && i%10==9)
        {
            arr[i]=i;
        }
    }
    //printing in sets of 100 from 0 to 99 to so on that are ending with 9
    for(int i=0; i<n; i+=100)
    {
        cout << "Prime numbers from " << i << " to " << i+99 << " that are ending with 9 are: ";
        for(int j=i; j<i+100; j++)
        {
            if(arr[j]!=0)
            {
                cout << arr[j] << " ";
            }
        }
        cout << endl;
    }
    
}

int main()
{
    int n=10000;
    cout << "The Prime Numbers from 1 to 10000 those are ending with 9 are: " << endl;
    check(n);
    cout<<endl<<"cheking"<<endl;
    print_list_of_100(n);
    return 0;
}