#include <bits/stdc++.h>
using namespace std;

int main() {
    // Write C++ code here
    int n = 4;

    int repeat= (2*n)-2;
    for(int i=0; i<n;i++){
        for(int j=0; j<(i+1); j++){
            cout<<"*";
        }
        for(int j=0; j<repeat; j++){
            cout<<" ";
        }
        for(int j=0; j<(i+1); j++){
            cout<<"*";
        }
        repeat -= 2;
        cout<<endl;
    }

    for(int i =0; i<n; i++){
        for(int j=0; j<(n-i-1); j++){
            cout<<" ";
        }
        int breakpoint = (i+1)/2;
        for( int j =0; j<((2*i)+1); j++){
            char ch= 'A';
            cout<<ch;
            if(j<= breakpoint){
                ch++;
            }else{
                ch--;
            }
        }
        cout<<endl;
    }

    return 0;
}