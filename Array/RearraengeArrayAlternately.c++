#include <iostream>
#include<bits/stdc++.h>
using namespace std ;

int main() {
    int n;
    cout <<"Enter n : ";
    cin >> n ;
    int arr[n];
    cout << "Enter array element : ";
    for(int i = 0 ; i < n ; i++)
    {
        cin >> arr[i] ;
    }
    int size = sizeof(arr) / sizeof(arr[0]) ;
    cout << size << endl ;
    sort(arr , arr + n);
    int res[n] ;
    
    int i , j , k ;
    i = 0 ; 
    j = n-1 ;
    k = 0;
    while(i <= j)
    {
        if(i == j)
        {
            res[k] = arr[i] ;
            break ;
        }
        res[k] = arr[j] ;
        k++; 
        res[k] = arr[i] ;
        k++;
        i++;
        j--;
    }
    
    for(int i = 0 ; i < n ; i++)
    {
        cout << res[i] << " " ;
    }
    cout << endl ;
    return 0;
}