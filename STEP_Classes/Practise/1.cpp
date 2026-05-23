
//Question 1 — Largest Element in Array

#include<bits/stdc++.h>
using namespace std;


int main() {
    vector<int> arr = {3, 7, 2, 9, 5};
    int max=arr[0];
    for(auto x:arr){
        if(x>max){
            max=x;
        }
    }
    cout<<"The largest number is : "<<max<<endl;
    return 0;
}