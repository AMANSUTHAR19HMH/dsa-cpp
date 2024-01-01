#include <iostream>
using namespace std;
void swaparray(int arr[], int n)
{
    int temp;
    for (int i = 0; i < n; i += 2)
    {
        if (i + 1 < n)
        {
            temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
}
void printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    cout << endl;
}
int main()
{
    int arr[10];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Givven array " << endl;
    printarray(arr, n);
    swaparray(arr, n);
    cout << "After swaping" << endl;
    printarray(arr, n);
    return 0;
}