#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int MaxDiff(int arr[] , int n)
{
    int res = arr[1] - arr[0];
    int minval = arr[0];
    for(int j = 1; j < n ; j++)
    {
        res = max(res , arr[j] - minval);
        minval = min(minval ,arr[j]) ;
    }

    return res ;
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
    int res = MaxDiff(arr , n);
    cout << res << " " << endl ;
    
    return 0;
}