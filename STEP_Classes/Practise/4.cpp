//Check Palindrome String

#include<bits/stdc++.h>

using namespace std;

string rev(string st){
    string rev_str= "";
    for(int i = st.size()-1;i>=0;i--)
    {
        rev_str += st[i];
    }
    return rev_str;
}

bool palindrome(string s)
{
    string og_str=s;
    string rev_str = rev(s);
    if(og_str == rev_str)
    {
        return true;
    }
    else
    {
        return false;
    }
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