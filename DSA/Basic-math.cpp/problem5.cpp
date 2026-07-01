#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    //basic math p5
    int n;
    cout<<"n: ";
    cin>>n;
    
    int original=n;
    int sum= 0;
    string str= to_string(n);
    int l = str.length();
    
    vector<int> digit;
    for(int c: str){
        digit.push_back(c - '0');
    }
    
        for(int i=0; i<l; i++){
            int p= pow(digit[i], l);
            sum += p;
        }
    
    if(sum==original){
        cout<<"True";
    }else{
        cout<<"False";
    }
    

    return 0;
}