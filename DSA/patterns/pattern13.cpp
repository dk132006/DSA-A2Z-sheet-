#include <iostream>
using namespace std;

int main(){
    int n ;
    int start = 1;
    int update;

    cin>>n;

    for(int i = 0; i<n;i++){
        for(int j=0; j<(i+1); j++){
            cout<<start;
            update = ++start;
        }
        cout<<endl;
        start = update;
    }
    return 0;
}