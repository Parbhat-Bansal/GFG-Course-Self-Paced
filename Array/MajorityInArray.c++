#include<iostream>
using namespace std;

int majority(int arr[] , int n , int x , int y)
{
    int count1 = 0 ;
    int count2 = 0 ;
    int res = 0 ;

    for(int i = 0 ; i < n ; i++)
    {
        if(arr[i] == x)
        {
            count1++;
        }
    } 

    for(int i = 0 ; i < n ; i++)
    {
        if(arr[i] == y)
        {
            count2++;
        }
    }

    if(count1 < count2)
    {
        res = y ;
    }
    else if(count1 > count2)
    {
        res = x ;
    }
    else
    {
        if(x < y)
        {
            res = x ;
        }

        else if(x > y)
        {
            res = y ;
        }

    }

    return res ;

}

int main() 
{
    int n;
    cout << "Enter the Size of an array: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements in the array: ";
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }

    int x , y ;
    cout << "Enter value of X and Y : " ;
    cin >> x >> y ;
    int res = majority(arr , n , x , y);
    cout << res << endl ;
    
    
    return 0;
}