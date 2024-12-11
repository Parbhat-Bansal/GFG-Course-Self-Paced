#include<iostream>
using namespace std ;

bool CheckIsSortedOrRotated(int arr[] , int n)
{
    bool res = false ;
    for(int i = 1 ; i < n ; i++)
    {
        if(arr[i] >= arr[i-1])
        {
            res = true ;
        }

        else
        {
            res = false;
            return res ;
            
        }
    }
    return res ;
}

int main()
{
    int n ; 
    cout << "Enter the size of an array : ";
    cin>> n;
    int arr[n] ;
    cout << "Enter elements in an array : " ;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> arr[i] ;
    }

    bool check = CheckIsSortedOrRotated(arr , n);
    if(check == 0)
    {
        cout << "No, The array is not sorted " << endl ;
    }

    else
    {
        cout << "The array is sorted " << endl;
    }
    return 0 ;
}