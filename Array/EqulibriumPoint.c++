#include <iostream>
using namespace std;

int EquilibriumPoint(int arr[], int n) 
{
    int totalSum = 0;
    
    for (int i = 0; i < n; i++) 
    {
        totalSum += arr[i];
    }

    int leftSum = 0;
    
    for (int i = 0; i < n; i++) 
    {
        totalSum -= arr[i];

        if (leftSum == totalSum) 
        {
            return i + 1; 
        }

        leftSum += arr[i];
    }

    return -1; 
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
    
    int res = EquilibriumPoint(arr, n);
    
    if (res != -1) {
        cout << "Equilibrium Point is at position: " << res << endl;
    } else {
        cout << "No Equilibrium Point found." << endl;
    }
    
    return 0;
}
