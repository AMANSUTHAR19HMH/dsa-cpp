#include <iostream>
using namespace std;
int value( int a)
{
    a = a + 10;
    cout << a;
    return a;
}
int main()
{
    int a = 9 ;
    // int count;
    // cin >> count;
    value( a);
    return 0;
}