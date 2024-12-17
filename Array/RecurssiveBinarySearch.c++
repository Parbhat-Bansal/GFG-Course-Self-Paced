#include<bits/stdc++.h>
using namespace std;

int RecurssiveBinarySearch(int arr[], int low , int high , int n , int x)
{

    // base case
    if(low > high)
    {
            return -1;
    }

    int mid = low +(high - low)/2;
    if(arr[mid] == x)
    {
        return mid ;
    }

    else if(arr[mid] > x)
    {
        return RecurssiveBinarySearch(arr , low , mid-1 , n , x);
    }

    else
    {
        return RecurssiveBinarySearch(arr , mid+1 , high , n , x);
    }
}



int main() {
    int n;
    cout << "Enter the Size of an array: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements in the array in sorted manner : ";
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }

    int x ;
    cout << "Enter element to be search in the array : " ;
    cin >> x ;

    int low = 0 ; 
    int high = n-1 ;

    int res = RecurssiveBinarySearch(arr , low , high , n , x);
    if (res != -1) 
    {
        cout << "Element found at index: " << res << endl;
    } 

    else 
    {
        cout << "Element not found." << endl;
    }

    
    return 0;
}