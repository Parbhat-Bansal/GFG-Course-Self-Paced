#include<iostream>
#include<string>
using namespace std ;
int count = 0 ;

void Substrings(string str , string curr = " " , int i = 0)
{
    if(i == str.length())
    {
        cout << "'" << curr << "'" << endl;
        count ++ ;
        return ;
    }

    Substrings(str , curr , i+1);
    Substrings(str , curr+str[i] , i+1);


}

int main()
{
    string str;
    getline(cin , str);

    Substrings(str );

    cout<<"Number of string is :" << count << endl;
    return 0 ;

}