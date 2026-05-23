// Question 2 — Second Largest Element

#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {3, 7, 2, 9, 5};

    int largest = arr[0];
    int secondLargest = arr[1];

    if(secondLargest>largest){
        swap(largest,secondLargest);
    }

    for(int i=2;i<arr.size();i++)
    {
        if(arr[i]>largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i]>secondLargest  && arr[i] !=largest){
            secondLargest= arr[i];
        }
    }
    cout << "Largest Element : " << largest << endl;
    cout << "Second Largest Element : " << secondLargest << endl;

    return 0;
}