//Add reverseArray function to reverse an array
#include <bits/stdc++.h>
using namespace std;

void reverseArray(vector<int>& arr) {
        
    reverse(arr.begin(), arr.end());
}

int main() {
    // Input array
    vector<int> arr = {1, 2, 3, 4, 5};

    reverseArray(arr);
  
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

/*Output:

5 4 3 2 1

*/
