#include <iostream>
#include <algorithm>
using namespace std;

int FindMissing(int arr[], int n) {
    sort(arr, arr + n);

    
    int res = 1;  
    
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] == res) {
            res++;  
        }
    }

    return res;  
}

int main() {
    int n;
    cout << "Enter the Size of the array: ";
    cin >> n;
    
    
    if (n == 0) {
        cout << "1" << endl; 
        return 0;
    }

    int arr[n];
    cout << "Enter elements in the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int res = FindMissing(arr, n);
    cout << "The first missing positive number is: " << res << endl;

    return 0;
}
