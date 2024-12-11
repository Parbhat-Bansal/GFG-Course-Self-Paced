#include<iostream>
using namespace std ;

int main()
{
    int n ;
    cout << "Enter a number : " ;
    cin >> n ;
    int m = n ;

    while(m > 0)
    {
        cout << m << " " ;
        m = m - 5 ;

    }

    cout << m << " " ;

    while(m < n)
    {
        m = m + 5 ;
        cout << m << " " ;
    }

    cout << endl ;
}