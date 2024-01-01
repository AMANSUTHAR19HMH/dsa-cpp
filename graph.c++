#include <iostream>
#include <unordered_map>
#include <list>
using namespace std;
class graph
{

public:
    unordered_map<int, list<int>> adj;
    void addedge(int a, int b, bool direction)
    {
        adj[a].push_back(b);
        if (direction == 0)
        {
            adj[a].push_back(b);
        }
    }
    void adjasentlist()
    {
        for (auto i : adj)
        {
            cout << i.first << "->";
            for (auto j : i.second)

            {
                cout << j << ",";
            }
            cout << endl;
        }
    }
};

int main()
{
    int n;
    graph g;
    cout << " Enter the number of nodes" << endl;
    cin >> n;
    int m;
    cout << "Enter the number of edges" << endl;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cout << "enter source and destination node" << endl;
        cin >> a >> b;
        g.addedge(a, b, 0);
    }
    g.adjasentlist();

    
}
