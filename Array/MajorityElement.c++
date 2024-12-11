#include <iostream>
#include <vector>
using namespace std;

// Function to find the majority element in the array
int findMajorityElement(const vector<int>& arr) {
    int res = 0, count = 1;

    for (int i = 1; i < arr.size(); i++) {
        if (arr[res] == arr[i]) {
            count++;
        } else {
            count--;
        }

        if (count == 0) {
            res = i;
            count = 1;
        }
    }

    count = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[res] == arr[i]) {
            count++;
        }
    }


    if (count <= arr.size() / 2) {
        return -1;
    }

    return arr[res];
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    if (n <= 0) {
        cout << "Array size must be positive." << endl;
        return 1; // Exit with an error code
    }

    vector<int> arr(n);
    cout << "Enter elements in the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int res = findMajorityElement(arr);
    
    if (res == -1) {
        cout << res << endl;
    } else {
        cout << "Majority element: " << res << endl;
    }

    return 0;
}
