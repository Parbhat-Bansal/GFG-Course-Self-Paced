#include <iostream>
#include <bits/stdc++.h>
using namespace std; 

int CountFlip(int m , int n)
{
    int count = 0 ;
    while(m > 0 || n > 0)
    {
        if((m & 1) == (n & 1))
        {
            m = (m >> 1) ; 
            n = (n >> 1);
        }

        else
        {
            if((m & 1) != 0)
            {
                m = m ^ 1 ;
                count ++; 
                m = (m >> 1) ;
                n = (n >> 1) ;
            }
            else if((m & 1) == 0)
            {
                m = m ^ 1 ;
                count++ ;
                m = (m >> 1) ;
                n = (n >> 1) ;
            }
        }
    }
    return count ;
}

int CountFlip1(int m , int n)
{
    int count = 0 ;
    while(m > 0 || n > 0)
    {
        if((m & 1) == (n & 1))
        {
            m = (m >> 1) ; 
            n = (n >> 1) ;
        }
        else 
        {
            count ++; 
            m = (m >> 1) ; 
            n = (n >> 1) ;
        }
    }
    return count ;

}
int main()
{
    int x , y ;
    cin >> x >> y;

    // int res = CountFlip(x , y);
    int res1 = CountFlip1(x , y);

    cout << res1 ;
    return 0 ;
}