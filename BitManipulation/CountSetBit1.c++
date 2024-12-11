#include<iostream>
using namespace std ;

int CountBit(int n)
{
    int count = 0 ; 
    int i = 0 ;
    while(n > 0)
    {

       if((n & 1) == 1)
        {
            count ++ ;
        }
        n = n / 2;
    }
    return count ;

}

int Brain(int n , int tb)
{
    int count = 0 ;
    while(n > 0)
    {
        n = (n & (n-1));
        count++;
    }
    tb = tb + count ;
    return tb ;
}
int main()
{
    int x ;
    int count = 0 ;
    int i = 1 ;
    cout << "Enter value of x : " ;
    cin >> x ;
    int tb = 0 ;
    // int y = CountBit(x);
    // cout << y << endl ;
    for(int i = 1 ; i <= x ; i++)
    {
        tb = Brain(i , tb);
    }
    cout<< "Count bits by Brain Algo: "<< tb << endl;
    // if(z == 1)
    // {
    //     cout << "The value is Power of 2 " << endl ;
    // }
    return 0 ;

}