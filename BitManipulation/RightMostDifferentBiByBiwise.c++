#include<iostream>
using namespace std ;

int DiffBit(int x , int y)
{
    int count = 0;
    while(x > 0 || y > 0)
     {
        if((x & 1) == (y & 1))
        {
            count ++ ;
            x = (x >> 1);
            y = (y >> 1);
        }
        else
        {
            return count ;
        }
     }
     return -1 ;
}
int main()
{
     int x ;
     int y ;
    //  int count = 0 ;
     cout << "Enter two numbers : " ;
     cin >> x >> y ;

     int db = DiffBit(x, y);
     if(db == -1)
     {
        cout << "No bit is different " << endl ;
     }
     else{
        cout << db + 1  << endl ;
     }
}
