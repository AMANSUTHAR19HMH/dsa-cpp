#include <iostream>
using namespace std;
void Fibonacci(int n)
{

    int first_term = 0;
    int second_term = 1;
    cout << first_term << " " << second_term << " ";

    int next_term = first_term + second_term;
    for (int i = 3; i <= n; i++)
    {
        next_term = first_term + second_term;
        first_term = second_term;
        second_term = next_term;
        cout << next_term << "  ";
    }
}
int main()
{
    int n;
    cin >> n;
    // cout <<
    Fibonacci(n);
    return 0;
}