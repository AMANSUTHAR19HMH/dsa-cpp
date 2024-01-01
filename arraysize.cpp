#include <iostream>
using namespace std;
void intsize(int sizarr)
{
    cout << " size  of array is " << sizarr;
}
int main()
{
    int array[10] = {1, 2, 3, 4, 5, 6, 7};
    int sizarr = sizeof(array) / sizeof(int);
    intsize(sizarr);

    return 0;
}