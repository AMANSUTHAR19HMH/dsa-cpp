#include <iostream>
#include <array>
using namespace std;
int mmmmin(int array[], int n)
{
    int max = INT8_MIN;

    for (int i = 0; i < n; i++)
    {

        if (array[i] > max)
        {
            max = array[i];
        }
    }
    cout << " maximum value  in this givven array is " << max << endl;
    return 0;
}
int gettttmax(int array[], int n)
{

    int min = INT8_MAX;

    for (int i = 0; i < n; i++)
    {

        if (array[i] < min)
        {
            min = array[i];
        }
    }
    cout << " minimum value  in this givven array is " << min << endl;
    return 0;
}

int main()
{
    int n;
    cin >> n;
    int array[1000];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    gettttmax(array, n);
    mmmmin(array, n);
    return 0;
}