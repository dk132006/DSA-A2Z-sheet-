#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cout<<"n: ";
    cin>>n;

    //checking n is prime number or not
    vector<int> v;
    for(int i=1;i<=n;i++){
        if(n%i == 0){
            v.push_back(i);
        }
    }

    if(v.size() == 2){
        cout<<"True";
    }
    else{
        cout<<"False";
    }

    return 0;
}
