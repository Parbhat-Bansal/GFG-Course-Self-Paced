#include <iostream>
#include <bits/stdc++.h>
using namespace std; 

string Binary(int n)
{
    string res =" "; 
    while(n != 0)
    {
        if(n%2 == 1)
        {
            res += '1' ;
        }
        else
        {
            res += '0' ;
        }

        n = n/2 ;

    }
    return res ;
}
int main()
{
    int x ;
    int count = 4 ;
    cout << "Enter x :" << endl ;
    cin >> x ;

    string str = Binary(x);

    cout << str << " " << str.length()-1 << endl ;

    for(int i = 0 ; i < str.length() ; i++)
    {
        if(str[i] == 0)
        {
            count++ ;
        }
    }

    cout << endl << count ;

    return 0 ;
}