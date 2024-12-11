#include<iostream>
#include<bits/stdc++.h>
using namespace std ;
string ConvertToBinary(int num)
{
    string str = "" ;
    while(num > 0)
    {
        if(num % 2 == 0)
        {
            str += '0';
        }

        else{
            str += '1' ;
        }

        num /= 2 ;
    }
    return str ;
}
int main()
{
    int n  ;
    cout << "Enter first number : " ;
    cin >> n ;
    int m ;
    cout << "Enter Second number : " ;
    cin >> m ;

    string s1 = ConvertToBinary(n);
    string s2 = ConvertToBinary(m);

    int minlen = 0 ;
    int l1 = s1.length() ;
    int l2 = s2.length() ;
    if(l1 < l2 )
    {
        minlen = l1 ;
    }
    else if(l1 > l2)
    {
        minlen = l2 ;
    }
    else
    {
        minlen = l1 ;
    }
    int j = 0; 
    for(int i = 0 ; i < minlen ; i++)
    {
        if(s1[i] != s2[i])
        {
            j = i ;
            break;
        }
    }

    cout << j+1 << endl ;
    return 0 ;
}