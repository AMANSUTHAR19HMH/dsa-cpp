#include <iostream>
using namespace std;
bool isprime(int n)
{
    bool isprime = 1;
    int num;
    for (int i = 2; i < (n / 2); i++)
    {
        num = n % i;
        if (num == 0)
        {
            isprime = 0;
            break;
        }
    }
    if (isprime == 0)
    {
        cout << " This is  not a prime number ";
    }
    else
    {
        cout << " This is   a prime number ";
    }
}
int main()
{
    int n;
    cin >> n;
    isprime(n);

    return 0;
}