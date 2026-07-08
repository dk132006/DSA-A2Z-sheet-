// Print 1 to n numbers using Recursion 
#include <iostream>
using namespace std;

void show(int n, int i){
    if (i<=n){
        cout<<i<<endl;
        i++;
        show(n, i);
    }
    else{
        return;
    }
}

int main() {
    
    int i =1;
    int n;
    cout<<"n: ";
    cin>>n;
    show(n, i);

    return 0;
}

/* OUTPUT 
n:5
1
2
3
4
5
*/
  
