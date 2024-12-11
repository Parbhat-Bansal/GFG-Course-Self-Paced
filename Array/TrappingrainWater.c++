#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int TrappedWater(int arr[] , int n)
{
    int lmax[n] , rmax[n] ;
    lmax[0] = arr[0] ;
    for(int i = 1 ; i < n - 1 ; i++)
    {
        lmax[i] = max(arr[i] , lmax[i - 1]);
    }

    rmax[n-1] = arr[n-1] ;
    for(int i = n-2 ; i >= 0; i--)
    {
        rmax[i] = max(arr[i] , rmax[i+1]);
    }

    int res = 0 ;
    for(int i = 1 ; i < n-1 ; i++)
    {
        res = res + min(lmax[i] , rmax[i]) - arr[i] ;
    }


    return res ;
}

int main() {
    int n;
    cout << "Enter total numbers of bars : ";
    cin >> n;
    int arr[n];
    cout << "Enter height of the bars : ";
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }
    

    int res = TrappedWater(arr , n);

    cout << res << endl ;
    return 0;
}