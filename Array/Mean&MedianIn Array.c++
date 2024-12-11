#include<iostream>
using namespace std ;

int Mean(int arr[] , int n)
{
    int sum = 0;
    for(int i = 0 ; i < n ; i++)
    {
        sum += arr[i];
    }

    return sum/n ;
}

int Median(int arr[] , int n)
{
    int res = 0 ;
    if(n%2 != 0)
    {
        res = n/2 ;
    }
    else if(n%2 == 0)
    {
        int a = n / 2 ;
        int b = n - 1 ;
        int c = b/2 ;

        int r = arr[a] + arr[c] ;
        res = r / 2 ;
    }
    return res ;
}

int main()
{
    int x ;
    cin >> x ;
    int arr[x];
    for(int i = 0 ; i < x ; i++)
    {
        cin >> arr[i];
    }

    int res = Mean(arr , x);
    cout << "Mean is : " << res << endl ;

    int med = Median(arr , x);
    cout << "Median is : " << med << endl ;
}