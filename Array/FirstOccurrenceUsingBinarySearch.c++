#include <bits/stdc++.h>
using namespace std;

int FirstOccurrenceUsingBinarySearch(int arr[], int n, int x) 
{
    int low = 0, high = n - 1;
    while (low <= high) 
    {
        int mid = low + (high - low) / 2; 
        if (arr[mid] > x) 
        {
            high = mid - 1;
        } 

        else if(arr[mid] < x)
        {
            low = mid + 1;
        }

        else
        {
            if(mid == 0 || arr[mid -1] != arr[mid])
            {
                return mid;
            }
            else
            {
                high = mid -1 ;
            }
        }
    }
    return -1;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements in the array in sorted manner : ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int x;
    cout << "Enter the element to search: ";
    cin >> x;

    int res = FirstOccurrenceUsingBinarySearch(arr, n, x);
    if (res != -1) {
        cout << "Element found at index: " << res << endl;
    } else {
        cout << "Element not found." << endl;
    }

    return 0;
}
