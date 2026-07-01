//basic math p6
#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
    vector<int> output;
    int n;
    cout<<"n: ";
    cin>>n;
    
    for(int i=1; i<=n; i++){
        if(n%i==0){
            output.push_back(i);
        }
    }
    for(int val: output){
        cout<<val<<" ";
    }

    return 0;
}