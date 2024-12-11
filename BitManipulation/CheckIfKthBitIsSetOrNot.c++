#include <iostream>
using namespace std;
//https://amcatglobal.aspiringminds.com/?data=JTdCJTIybG9naW4lMjIlM0ElN0IlMjJsYW5ndWFnZSUyMiUzQSUyMmVuLVVTJTIyJTJDJTIyaXNBdXRvbG9naW4lMjIlM0ExJTJDJTIycGFydG5lcklkJTIyJTNBJTIyNDM0ODIlMjIlMkMlMjJhdXRoa2V5JTIyJTNBJTIyWkdNMVpqRTFaVEU1TWpaak5qWm1aR0l3TmpNM1pqSXhNRGRrWlRVeFpXVSUzRCUyMiUyQyUyMnVzZXJuYW1lJTIyJTNBJTIyMjNCQ1MxMDQ3OCU0MGN1Y2hkLmluX1hJMmI3MzFIMTc1ajZkN0dEJTIyJTJDJTIycGFzc3dvcmQlMjIlM0ElMjI0eXZmSFBOUCUyMiUyQyUyMnJldHVyblVybCUyMiUzQSUyMiUyMiU3RCUyQyUyMnJlZ2lvbiUyMiUzQSUyMlVTJTIyJTdE
int main()
{
    int x;
    int k;

    cout << "Enter a number: ";
    cin >> x;
    cout << endl << "Enter bit position to be checked: ";
    cin >> k;

    // Shift 1 to the left by k positions to create a mask
    int z = (1 << k);

    // Check if the k-th bit of x is set
    if((x & z) != 0)
    {
        cout << "Set" ;
    }
    else
    {
        cout << "Not Set";
    }

    return 0;
}
