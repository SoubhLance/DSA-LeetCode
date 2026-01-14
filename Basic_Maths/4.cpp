#include <iostream>
using namespace std;

// Armstrong Number
bool isArmstrong(int num)
{
    int x = num;
    int p = num;
    int cnt = 0;
    int sum = 0;

    // count digits
    while (num > 0) {
        cnt++;
        num /= 10;
    }

    // calculate sum
    while (p > 0) {
        int last = p % 10;

        int power = 1;
        for (int i = 0; i < cnt; i++) {
            power *= last;
        }

        sum += power;
        p /= 10;
    }

    return sum == x;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (isArmstrong(n))
        cout << "Armstrong Number\n";
    else
        cout << "Not an Armstrong Number\n";

    return 0;
}
