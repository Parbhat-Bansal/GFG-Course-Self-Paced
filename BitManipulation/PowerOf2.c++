#include<iostream>
using namespace std ;

bool CheckPowerOf2(int x)
{ 
    if(x == 0)
    {
        return 0;
    }
    bool i = false ;
    while(x > 1)
    {
        if(x%2 == 0)
        {
            x = x/2 ;
            i = true ;
        }
        else if(x%2 != 0)   
        {
            i = false ;
            return i ;
        }
    }
    return i ;
    
}
int main()
{
    int x ;
    cout << "Enter a number : " ;
    cin >> x ;

    bool ans = CheckPowerOf2(x);

    cout << ans ; 

}