//Print sum of first N natural numbers using Recrusion
#include <iostream>
using namespace std;

int sumf(int n, int sum){
    if(n>0){
        sum += n;
        n--;
        return sumf(n, sum);
        
    }
    else{
        return sum;
    }
}

int main() {
    // Write C++ code here
    int sum =0, n;
    cout<<"n: ";
    cin>>n;
    int total = sumf(n, sum);
    cout<<total;

    return 0;
}

/*Output:

n:6
21*/
