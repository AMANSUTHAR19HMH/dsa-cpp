#include <iostream>
using namespace std;

void swaparray(int arr[], int n)
{

    for (int i = 0; i < n; i+=2)
    {
        if (i + 1 < n)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}
void printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[100];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)

    {
        cin >> arr[i];
    }
    cout << " Givven array" << endl;
    printarray(arr, n);
    swaparray(arr, n);
    cout << endl
         << "After swapping" << endl;
    printarray(arr, n);

    return 0;
}
