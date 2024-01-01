#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<int> myqueue;

    myqueue.push(10);

    cout << "Front element: " << myqueue.front() << endl;
    cout << "Rear element: " << myqueue.back() << endl;

    return 0;
}