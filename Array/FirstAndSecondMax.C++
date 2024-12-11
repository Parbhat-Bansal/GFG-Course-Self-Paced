#include <iostream>
using namespace std ;

void FMax(int arr[] , int n)
{
    int max1 = arr[0] ;
    int max2 = arr[1] ;
    for(int i = 0 ; i < n ; i++)
    {
        if(arr[i] > max1)
        {
            max1 = arr[i] ;
        }
    }

    for(int i = 0 ; i < n ; i++)
    {
        if(arr[i] > max2 && arr[i] < max1)
        {
            max2 = arr[i] ;
        }
    }

    cout << "The first maximum element is : " << max1 << endl ;
    cout << "The second maximum element is : " << max2 << endl ;
}

int main()
{
    int x ; 
    cout << "Enter the size of an array : " ;
    cin >> x ;
    int arr[x];
    cout<<"Enter elemnts in an array : ";
    for(int i = 0 ; i < x ; i++) 
    {
        cin >> arr[i] ;
    }

    FMax(arr , x);
    return 0 ; 

}