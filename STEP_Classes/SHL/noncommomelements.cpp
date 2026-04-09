//Non Common Elements in a set

#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

int CountnonCommonElements(vector<int>& arr1, vector<int>& arr2){
    unordered_set<int> s1(arr1.begin(), arr1.end());
    unordered_set<int> s2(arr2.begin(), arr2.end());

    int count = 0;

    for(auto x : s1){
        if(s2.find(x) == s2.end()){
            count++;
        }
    }

    for(auto x : s2){
        if(s1.find(x) == s1.end()){
            count++;
        }
    }

    return count;
}

int main(){
    int n, m;

    // input first array
    cin >> n;
    vector<int> arr1(n);
    for(int i = 0; i < n; i++){
        cin >> arr1[i];
    }

    // input second array
    cin >> m;
    vector<int> arr2(m);
    for(int i = 0; i < m; i++){
        cin >> arr2[i];
    }

    int result = CountnonCommonElements(arr1, arr2);
    cout << result << endl;

    return 0;
}