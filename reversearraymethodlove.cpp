#include <iostream>
using namespace std;
void printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}
void reversearray(int arr[], int n)
{
    cout << "reverse array ";
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {

        swap(arr[start], arr[end]);
        start++;
        end--;
    }
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
    cout << "givven array";

    printarray(arr, n);
    reversearray(arr, n);
    printarray(arr, n);

    return 0; 
}