#include<iostream>
using namespace std ;

void MoveZero(int arr[] ,int n)
{
    int count = 0 ;
    for(int i = 0 ; i  < n ; i++)
    {
        if(arr[i] != 0)
        {
            swap(arr[i] , arr[count]);
            count++ ;
        }
    }

    for(int i = 0 ; i < n ; i++)
    {
        cout << arr[i] << " " ;
    }
    cout << endl;
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

    MoveZero(arr , n);
    return 0 ;
}