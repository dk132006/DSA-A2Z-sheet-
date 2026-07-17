// Factorial of N given number

#include <iostream>
using namespace std;

int factorial(int a, int b){
    if(a>0){
        b*=a;
        a--;
        return factorial(a,b);
    }else{
        return b;
    }
}

int main() {
    int n;
    int product= 1;
    cout<<"n: ";
    cin>>n;
    int fact = factorial(n,product);
    cout<<"Factorial: "<<fact;

    return 0;
}

/*Output:

n: 6
Factorial: 720
*/
