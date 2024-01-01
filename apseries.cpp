#include <iostream>
using namespace std;
int APSeries(int n)
{
    int ans = (3 * n + 7);
    return ans;
}
int main()
{
    int n;
    cin >> n;
    cout << APSeries(n);

    return 0;
}