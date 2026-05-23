//optimal approach for checking a palidroome string 

#include<bits/stdc++.h>

using namespace std;


bool palindrome(string s)
{
    int left = 0;
    int right = s.size() - 1;

    while(left < right)
    {
        if(s[left] != s[right])
        {
            return false;
        }

        left++;
        right--;
    }

    return true;
}

int main(){
    string s;
    cout<<"Enter your string: "<<endl;
    cin>>s;
    if(palindrome(s)){
        cout<<"The string ' "<<s<<" 'is palindrome."<<endl;
    }
    else{
        cout<<"The string ' "<<s<<" 'is not palindrome."<<endl;

    }
}