#include<iostream>
using namespace std ;

int OddOne(int arr[], int n)
{   
    int res = arr[0] ;
    for(int i = 1 ; i < n ; i++)
    {
        res = res ^ arr[i] ;
        cout << res << " " ;
    }
    cout << endl ;

    return res ;
}
int main() 
{
    int x ;
     cout << "Enter Size of an Array :  " ;
     cin >> x ;
     cout << endl ;
     int arr[x] ;
     cout << "enter elements in array : " ;
     for(int i = 0 ; i  < x ; i++)
     {
        cin >> arr[i] ;
     }

     int res = OddOne(arr , x); 
     cout << res << endl ;
     return 0 ;
}