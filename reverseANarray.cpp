#include <iostream>
using namespace std;
int main()
{
    int arr[8];
    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }
    cout << "array is " << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << endl;
    }
    cout << "reverse array " << endl;
    for (int i = 0; i < 4; i++)
    {

        cout << arr[3 - i];
    }
    return 0;
}