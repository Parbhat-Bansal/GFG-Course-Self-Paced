#include<iostream>
#include<math.h>
using namespace std;

int  MinimunAdjDiff(int arr[] , int n)
{
    int res = 0 ;
    int res1 = 1000000 ;

    for(int i = 0 ; i < n-1 ; i++)
    {
        res = arr[i] - arr[i+1] ;
        if(res < 0)
        {
            res = -res; 
        }
        res1 = min(res1 , res);
        res = 0; 

    }

    int x = arr[n-1] - arr[0] ;
    if(x < 0)
    {
        x = -x ;
    }
    res1 = min(res1 , x);
    return res1 ;
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
    
    int res = MinimunAdjDiff(arr , n);
    cout << res << endl ;
    
    return 0;
}   