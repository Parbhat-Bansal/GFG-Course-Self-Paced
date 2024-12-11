#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void WaveArray(int arr[] , int n)
{
    if(n%2 != 0)
    {
        for(int i = 0 ; i < n ; i = i + 2)
        {
            if(i < n-1)
            {
                int j = i + 1 ;
                int temp = arr[i] ;
                arr[i] = arr[j] ;
                arr[j] = temp ;
                temp = 0 ;
            }
        
        }
    }

    else
    {
        for(int i = 0 ; i < n ; i = i + 2)
        {
            int j = i + 1 ;
            int temp = arr[i] ;
            arr[i] = arr[j] ;
            arr[j] = temp ;
            temp = 0 ;
        }

    }

    for(int i = 0 ; i < n ; i++)
    {
        cout << arr[i] << " " ;
    }

    cout << endl ;
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
    sort(arr , arr + n);
    WaveArray(arr , n);
    
    return 0;
}