#include <iostream>
#include <vector>
using namespace std;

bool checkRotatedAndSorted(vector<int>& arr, int n) {
    int count = 0; 

    for (int i = 0; i < n; i++) {
       
        if (arr[i] > arr[(i + 1) % n]) {
            count++;
        }
    }
    return (count == 1);
}

int main() {
    vector<int> arr1 = {3, 2, 1, 4}; // Example 1
    vector<int> arr2 = {1, 2, 3};     // Example 2

    cout << (checkRotatedAndSorted(arr1, arr1.size()) ? "Yes" : "No") << endl; // Output: Yes
    cout << (checkRotatedAndSorted(arr1, arr1.size()) ? "Yes" : "No") << endl; // Output: No

    return 0;
}
