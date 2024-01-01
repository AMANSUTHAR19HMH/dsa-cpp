#include <iostream>
using namespace std;
void printarray()
{
    int n;

    int number[1000];

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> number[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << number[i] << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {

        cout << i << "  array " << endl;
        printarray();
    }

    return 0;
}