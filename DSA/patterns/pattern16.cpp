#include <iostream>
using namespace std;

int main(){
    int index = 0;
    int n;
    cin>>n;
    char arr[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    for(int i = 1; i<=n;i++){
        for(int j= 0; j<i;j++){
            cout<<arr[index];
            
        }
        cout<<endl;
        ++index;
        
    }

    return 0;

}