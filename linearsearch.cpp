#include <iostream>
using namespace std;
void search(int arr[], int count)
{
    int numToSearch;
    cout << "Enter the number to be searched: ";
    cin >> numToSearch;
    for (int i = 0; i < count; i++)
    {
        if (numToSearch == arr[i])
        {
            cout << "search found " << arr[i];
            break;
        }
    }
    
}
int main()
{
    int arr[10];
    int count;
    cin >> count;
    for (int i = 0; i < count; i++)
    {
        cin >> arr[i];
    }
    search(arr, count);

        return 0;
}