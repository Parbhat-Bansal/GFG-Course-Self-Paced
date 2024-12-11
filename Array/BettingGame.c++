#include<iostream>
#include<string.h>
using namespace std ;

int BettingGame(string str , int n)
{
    int bet = 1 ;
    int balance = 4 ;

    for(int i = 0 ; i < n ; i++)
    {
        if(balance >= bet)
        {
            if(str[i] == 'W')
            {
                balance = balance + bet ;
                bet = 1 ;
            }

            else if(str[i] == 'L')
            {
                balance = balance - bet ;
                bet = 2 * bet ;
            }
        }

        else{
            balance = -1 ;
        }

    }

    return balance;
}

int main()
{
    string str ;
    cout << "Enter a String : " ;
    getline(cin,str);
    int n = str.length();
    for(int i = 0 ; i < n ; i++)
    {
        str[i] = toupper(str[i]);
    }
    int res = BettingGame(str , n);
    cout << res << endl ;
    return 0 ;
}