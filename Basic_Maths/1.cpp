// counting the number of digits 
#include<iostream>

using namespace std;

int countDigits(int n){
	int count=0;
	while(n>0)
	{
		int last_digit=n%10;
		count+=1;
		n=n/10;
	}
	return count;
    cout<<count;
}

int countDigitsoptimal(int n)
{
	int count = 0;
	while(n>0)
	{
		int last_digit=n%10;
		count+=1;
		n=n/10;
	}
	return count;
	cout<<count;
}


int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    cout << "The ans with for loop: " << countDigits(n) << endl;
    cout << "The ans with while loop: " << countDigitsoptimal(n);
    return 0;
}