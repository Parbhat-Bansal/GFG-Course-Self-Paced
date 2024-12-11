#include<iostream>
using namespace std; 

int FirstBit(int n)
{
    int i = 0 ;
    while(n >= 0)
    {
        if(n == 0)
        {
            n = -1 ;
            return i ;
        }
        else if(n % 2 ==1)
        {
            i++ ;
            n = -1;
            return i ;
        }

        else if((n & 1) == 1)
        {
            i++ ;
            return i ;
        }
        i++ ;
        n = n / 2 ;
    }
    return -1 ;
}
int main()
{
    int n ; 
    // int i = 0 ;
    // int j = 0 ;
    cout << "Enter a number : " ;
    cin >> n ;
    int x = FirstBit(n);
    cout << x ;
}