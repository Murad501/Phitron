#include <bits/stdc++.h>
using namespace std;

class Edge
{
public:
    long long int u, v, c;
    Edge(long long int u, long long int v, long long int c)
    {
        this->u = u;
        this->v = v;
        this->c = c;
    }
};
const int N = 1005;
long long int dis[N];
int main()
{
    int n, e;
    cin >> n >> e;
    vector<Edge> EdgeList;
    while (e--)
    {
        long long int u, v, c;
        cin >> u >> v >> c;

        EdgeList.push_back(Edge(u, v, c));
    }
    for (int i = 1; i <= n; i++)
    {
        dis[i] = LLONG_MAX;
    }

    int s;
    cin >> s;

    dis[s] = 0;
    for (int i = 1; i <= n - 1; i++)
    {
        for (Edge ed : EdgeList)
        {
            long long int u, v, c;
            u = ed.u;
            v = ed.v;
            c = ed.c;
            long long int total = dis[u] + c;
            if (dis[u] < LLONG_MAX && total < dis[v])
            {
                dis[v] = total;
            }
        }
    }

    bool cycle = false;
    for (Edge ed : EdgeList)
    {
        int u, v, c;
        u = ed.u;
        v = ed.v;
        c = ed.c;
        long long int total = dis[u] + c;
        if (dis[u] < LLONG_MAX && total < dis[v])
        {
            cycle = true;
            break;
        }
    }
    if (cycle)
    {
        cout << "Negative Cycle Detected" << endl;
    }
    else
    {
        int t;
        cin >> t;

        for (int i = 1; i <= t; i++)
        {
            int d; cin >> d;
            if (dis[d] == LLONG_MAX)
            {
                cout << "Not Possible" << endl;
            }
            else
            {
                cout << dis[d] << endl;
            }
        }
    }
    return 0;
}