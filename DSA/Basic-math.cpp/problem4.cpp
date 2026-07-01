#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n1,n2,gcd;
    cout<<"n1: ";
    cin>>n1;
    cout<<"n2: ";
    cin>>n2;

    int gcd = 1;
    if(n1>n2){
        for(int i = 1;i<n2;i++){
            if(n1%i == 0 && n2%i == 0){
                gcd = i;
            }
        }
    }
    else{
        for(int i = 1;i<n1;i++){
            if(n1%i == 0 && n2%i == 0){
                gcd = i;
            }
        }
    }

    cout<<gcd;

    return 0;
}