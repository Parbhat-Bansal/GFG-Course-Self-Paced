#include <iostream>
#include <algorithm>
using namespace std ;
int RopeCutting(int n , int a, int b , int c)
{
    if(n == 0)
    {
        return 0 ;
    }

    if(n < 0)
    {
        return -1; 
    }

    return max(RopeCutting(n-a , a , b , c ) , RopeCutting(n-b , a , b , c ) , RopeCutting(n-c , a , b , c ) ,);
}

int main()
{
    int n ,a ,b, c ;
    cout << "Enter value of n , a , b , c : " ;
    cin >> n >> a >> b >> c ;

    int res = RopeCutting(n , a , b, c);
}