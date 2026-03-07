//FInding the progression and calcualting thr total vehicle sold per month 
// the series progression is 1,3,7,13 

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int term =1;
    int diff=2;
    for (int i=0; i<n; i++)
    {
        arr[i]=term;
        term=term+diff;
        diff=diff+2;
    }

    int vehicle_sold_retail=0;
    int vehicle_sold_corporate=0;
    int vehicle_sold=0;
    for(int i=0; i<n; i++)
    {
        if(i%5==0)
        {
            vehicle_sold_corporate += arr[i];
        }
        else{
            vehicle_sold_retail += arr[i];
        }
    }

    vehicle_sold=vehicle_sold_corporate+vehicle_sold_retail;

    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Total vehicles sold: " << vehicle_sold << endl;
    cout << "Total vehicles sold to retail customers: " << vehicle_sold_retail << endl;
    cout << "Total vehicles sold to corporate customers: " << vehicle_sold_corporate << endl;
    return 0;
}