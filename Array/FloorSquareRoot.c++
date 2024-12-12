#include<iostream>
using namespace std ;

int FloorSquareRoot(int n)
{
    int m = n ;
    int res = -1; 
    while(n > 0)
    {
        if(n*n <= m)
        {
            res = n  ;
            break ;
        }
        else{
            n = n /2 ;
        }
    }
    return res ;
}

int FloorSquareRoot1(int n)
{
    int res = 0 ;
    for(int i = 1 ; i < n ; i++)
    {
        if(i * i > n)
        {
            res = i-1 ;
            break ;
        }
    }
    return res ;
}

int main()
{
    int n ;
    cout << "Enter value of n : " ;
    cin >> n ;

    int res = FloorSquareRoot1(n);
    cout << res << " " << endl ;
}