#include<iostream>
using namespace std;

int PeakElement(int arr[] , int n)
{
    if(arr[0] > arr[1])
    {
        return 1 ;
    }
    int res = 0 ; 

    for(int i = 1 ; i < n-1 ; i++)
    {
        if(arr[i] > arr[i-1] && arr[i] > arr[i+1])
        {
            res = 1; 
        }
    }
    if(arr[n-1] > arr[n-2])
    {
        res = 1 ;
    }

    return res ;
}


int main() {
    int n;
    cout << "Enter the Size of an array: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements in the array: ";
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }

    int res = PeakElement(arr,n);
    if(res == 1)
    {
        cout << "True" << endl ;
    }

    else
    {
        cout << "False" << endl ;
    }

    
    return 0;
}