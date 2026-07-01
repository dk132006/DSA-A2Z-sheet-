//basic math p3

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    
    string s= to_string(n);
    reverse(s.begin(), s.end());
    
    int rev = stoi(s);
    
    if(n == rev){
        cout<<"true";
    }else{
        cout<<"false";
    }

    return 0;
}