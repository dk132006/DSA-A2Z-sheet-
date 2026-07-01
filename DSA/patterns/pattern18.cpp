#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int n = 5;
    
    for(int i =0; i<n; i++){
        char ch = 'A'+(n-1-i);
        for(int j=0; j<(i+1); j++){
            cout<<ch;
            ch++;
        }
        cout<<endl;
        ch--;
    }

    return 0;
}