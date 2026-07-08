// Print n to 1 numbers using Recursion 
#include <iostream>
using namespace std;

void show(int n, int i){
    if(n>=i){
        cout<<n<<endl;
        n--;
        show(n,i);
    }
    else{
        return;
    }
}

int main() {
    int i=1;
    int n;
    cout<<"n: ";
    cin>>n;
    show(n,i);

    return 0;
}

/*
OUTPUT:

n:5
4
3
2
1
*/
