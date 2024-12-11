#include<iostream>
using namespace std ;
void LeftRotateByOne(int arr[] , int n)
{
    int temp =arr[0] ;
    for(int i = 1 ; i < n ; i++)
    {
        arr[i-1] = arr[i] ;
    }

    arr[n-1] = temp ;

    for(int i = 0 ; i < n ; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl ;
    
}

int main()
{
    int n ; 
    cout << "Enter the size of an array : ";
    cin >> n;
    int arr[n] ;
    cout<<"Enter element in an array : ";
    for(int i = 0 ; i < n ; i++)
    {
        cin >> arr[i];
    }

    LeftRotateByOne(arr , n);
    return 0 ;
}
