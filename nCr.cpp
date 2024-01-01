#include <iostream>
using namespace std;
int ans;
int factorial(int n)
{

    int factorial = 1;
    for (int i = 0; i <= n; i++)
    {
        factorial = factorial * i;
    }
    return factorial;
}
float nCr(int n, int r)
{

    int numinator = factorial(n);
    int demonitor = factorial(r) * factorial(n - r);
    float ans = numinator / demonitor;
    return ans;
}
int main()
{
    int n, r;
    cout << " Enter the value of n and r " << endl;
    cin >> n >> r;

    cout << "ans is";
    cout << nCr(n, r) << endl;
}