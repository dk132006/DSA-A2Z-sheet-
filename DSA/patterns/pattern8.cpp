#include <iostream>
using namespace std;

class pattern8{
    int n = 5;
    int patt(){
        for(int i = 0; i<n; i++){
            for(int j=0; j <= i+1; j++){
                cout<<" ";
            }
            for(int j=0; j <= ((2*n)-(2*i)-1); j++){
                cout<<"*";
            }
            for(int i = 0; i<n; i++){
            for(int j=0; j <= i+1; j++){
                cout<<" ";
            }
            cout<<endl;
        }

        return 0;
    }
}

int main(){
    pattern8 pn8;
    pn8.patt();

    return 0;
}};
