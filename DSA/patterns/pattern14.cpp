#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    char arr[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};

    for(int i = 0; i<n;i++){
        for(int j=0; j<(i+1); j++){
            cout<<arr[j];
        }
        cout<<endl;
    }
    
    return 0;
}