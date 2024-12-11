#include <iostream>
#include <vector>
using namespace std;

int MaxSum(int arr[], int n) {
    int res = arr[0]; 
    int maxi = arr[0];

    for (int i = 1; i < n; i++) {
        maxi = max(arr[i], maxi + arr[i]); 
        res = max(res, maxi);             
    }
    return res;
}

int main() {
    int n;
    cout << "Enter size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements in the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int res = MaxSum(arr, n);
    cout << "Maximum Subarray Sum: " << res << endl;
    return 0;
}
