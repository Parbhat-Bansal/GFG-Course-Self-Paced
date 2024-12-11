#include <iostream>
using namespace std;

int CountSetBit16(int x)
{
    int tbl[65536];
    tbl[0] = 0;
    
    for (int i = 1; i < 65536; i++) 
    {
        tbl[i] = tbl[i & (i - 1)] + 1;
    }

    int sum = 0;

   
    while (x != 0) 
    {
        sum += tbl[x & 65535]; 
        x = x >> 16;          
    }

    return sum;
}


int CountSetBit8(int x)
{
    int tbl[256];
    int record[256];
    tbl[0] = 0;
    record[0] = tbl[0];
    for (int i = 1; i < 256; i++) 
    {
        tbl[i] = tbl[i & (i - 1)] + 1;
        record[i] = record[i - 1] + tbl[i]; 
    }

    // for(int i = 0 ; i < 10 ; i++)
    // {
    //     cout << record[i] << " " ;
    // }
  
    // int sum = 0;


    // while (x != 0) 
    // {
    //     sum += tbl[x & 255];
    //     x = x >> 8 ;
    // }

    return record[x] ;
}



int CountSetBit4(int x) 
{
    int tbl[16];
    tbl[0] = 0;

    
    for (int i = 1; i < 16; i++) 
    {
        tbl[i] = tbl[i & (i - 1)] + 1;
    }

    int sum = 0;

   
    while (x != 0) 
    {
        sum += tbl[x & 15]; 
        x = x >> 4;          
    }

    return sum;
}



int main() {
    int x;
    cin >> x;
    int c8 = CountSetBit8(x);
    // int c4 = CountSetBit4(x);
    // int c16 = CountSetBit16(x);
    // cout << "By 4 bit table : " << c4 << endl ;
    cout << "By 8 bit table : " << c8 << endl ;
    // cout << "By 16 bit table : " << c16 << endl ;

    
    return 0;
}
