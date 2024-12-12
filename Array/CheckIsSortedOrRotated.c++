#include <iostream>
// #include <vector>
using namespace std;

bool checkRotatedAndSorted(int arr[] ,int n) {
    if (n < 2) 
    {
        return false; 
    }

    int count = 0; 
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] > arr[(i + 1) % n]) 
        {
            count++;
        }
    }

    return count == 1;
}

int main() {
    int n;
    cout << "Enter the Size of an array: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements in the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    bool res = checkRotatedAndSorted(arr , n);
    
    cout << res << " " << endl ;
    
    return 0;
}
