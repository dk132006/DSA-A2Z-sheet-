/* Print name n times using recursion.*/

#include <iostream>
#include <string>
using namespace std;

int n;
int count = 0;
string name;

void display(){
    if(count<n){
        cout<<name<<endl;
        count++;
        display();
    }else{
        return;
    }
}

int main(){
    cout<<"Name: ";
    cin>>name;
    cout<<"print how many times: ";
    cin>>n;
    display();
    return 0;
}

/*
Output:

Name: Deesharan
print how many times: 5
Deesharan
Deesharan
Deesharan
Deesharan
Deesharan
*/