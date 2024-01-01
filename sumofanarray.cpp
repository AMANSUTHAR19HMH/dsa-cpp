#include <iostream>
using namespace std;
void sum(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = arr[i] + sum;
    }
    cout << sum;
}
int main()
{
    int arr[100];
    cout << "Enter the size of array" << endl;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sum(arr, n);

    return 0;
}