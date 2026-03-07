// Problem-4: A number is called a Special Number if the sum of its digits raised to the power of their respective positions (starting from 1, from left to right) is equal to the number itself.
// You are given a positive integer n. Determine whether n is a Special Number.
// Then, extend this logic to find and analyze all Special Numbers between 1 and 10,000.
//eg 89 is a Special Number because 8^1 + 9^2 = 8 + 81 = 89


#include <iostream>
#include<cmath>

using namespace std;

int special_number(int n)
{
    int temp = n;
    if(n == 0)
        return 0;
    else if (n%10 == 0)
        return 0;
    else
    {
        int sum =0;
        //counting 
        int digits = 0;
        while(temp>0)
        {
            temp /= 10;
            digits++;
        }
        temp = n;
         for(int i = digits; i >= 1; i--)
    {
        int digit = temp % 10;
        sum += pow(digit, i);
        temp /= 10;
    }
        if(sum == n){
            cout << n << " is a Special Number" << endl;
            return 1;
        }
        else
            cout << n << " is not a Special Number" << endl;
            return 0;
    }
}


//categorize based on digit count 



int main()
{
    int count_special_numbers = 0;
    for(int i=1; i<=10000; i++)
    {
        special_number(i);
        if(special_number(i))
        {
            count_special_numbers++;
        }
    }
    cout << "Total Special Numbers between 1 and 10,000: " << count_special_numbers << endl;
    return 0;
}