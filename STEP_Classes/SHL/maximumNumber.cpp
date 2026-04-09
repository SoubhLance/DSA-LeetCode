#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int maximumNumber(vector<int>& arr)
{
    sort(arr.begin(),arr.end());
    int n = arr.size();

    int prod1 = arr[n-1]*arr[n-2];
    int prod2 = arr[0]*arr[1];

    int maxProd =  max(prod1,prod2);
    if (maxProd == prod1) {
        cout << "the Largest numbers are: " << arr[n-1] << " and " << arr[n-2] << endl;
    }
    else {
        cout << "the Smallest numbers are: " << arr[0] << " and " << arr[1] << endl;
    }
    return maxProd;
}

int main()
{
    int n;
    vector<int> arr;
    cout<<"Enter the number od elements to be pushed into the array: "<<endl;
    cin>>n;
    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    cout << "The elemets of the are: " << endl;
    for( auto x: arr){
        cout<< x << " "<< endl;
    }
    cout << "The Maximum product of the two largest numbers are : " << maximumNumber(arr) << endl;
    return 0;
}