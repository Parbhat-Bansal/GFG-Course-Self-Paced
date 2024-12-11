#include<iostream>
using namespace std ;

int RemoveDuplicate(int arr[] , int n)
{
    int res = 1 ;
    for(int i = 1 ; i < n ; i++)
    {
        if(arr[i] != arr[res - 1])
        {
            arr[res] = arr[i] ;
            res++;
        }
    }
    return res ;
}

int main()
{
    int n ;
    cout<< "Enter the Size of an array : " ;
    cin >> n;
    int arr[n] ;
    cout << "Enter elements in an array : ";
    for(int i = 0 ; i < n ; i++)
    {
        cin >> arr[i] ;
    }

    int res = RemoveDuplicate(arr , n);
    cout << res << endl; 

}



