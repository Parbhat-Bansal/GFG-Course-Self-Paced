#include <iostream>
#include <vector>
using namespace std;

void RotateArr(int arr[], int n, int d) {
    // d = d % n; 
    // if (d == 0) {
    //     for (int i = 0; i < n; i++) {
    //         cout << arr[i] << " ";
    //     }
    //     cout << endl;
    //     return;
    // }

    vector<int> arr1(d);
    vector<int> arr2(n - d);
    vector<int> res(n);

    for (int i = 0; i < d; i++) {
        arr1[i] = arr[i];
    }

    for (int i = d; i < n; i++) {
        arr2[i - d] = arr[i];
    }

    int j = 0;
    for (int i = 0; i < n - d; i++)
    {
        res[j] = arr2[i];
        j++;
    }

    for (int i = 0; i < d; i++) 
    {
        res[j] = arr1[i];
        j++;
    }

    for (int i = 0; i < n; i++) 
    {
        cout << res[i] << " ";
    }
    cout << endl ;
}

int main() {
    int n;
    cout << "Enter Size of an array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter elements in an array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int d;
    cout << "Enter a number to rotate the array: ";
    cin >> d;

    RotateArr(arr.data(), n, d);
    return 0;
}
