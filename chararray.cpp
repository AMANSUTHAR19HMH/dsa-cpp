#include <iostream>
using namespace std;
void printname(char name[])

{
    for (int i = 0; i < 4; i++)
    {
        cin >> name[i];
    }
    cout << " Your name is ";
    for (int i = 0; i < 4; i++)
    {
        cout << name[i];
    }
}
int main()
{
    char name[10];
    printname(name);

    return 0;
}