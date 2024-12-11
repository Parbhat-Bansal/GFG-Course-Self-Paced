#include<iostream>
#include<math.h>
using namespace std;

int Maximumconsecutive1s(int arr[] , int n)
{
    int count = 0 ;
    int res = 0;

    for(int i = 0 ; i < n ; i++)
    {
        if(arr[i] == 1)
        {
            count++ ;
        }

        else if(arr[i] == 0)
        {
            res = max(res , count);
            count = 0 ;
        }
    }

    return res ;
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

    int res = Maximumconsecutive1s(arr , n) ;
    cout << res << " " << endl ;
    
    
    return 0;
}