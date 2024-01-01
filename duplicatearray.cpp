#include <iostream>
using namespace std;
void duplicatefind(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                cout << "duplicate element " << arr[i] << endl;
                break;
            } 
        }
    }
}
int main()
{
    int arr[10000];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    duplicatefind(arr, n);

    return 0;
}