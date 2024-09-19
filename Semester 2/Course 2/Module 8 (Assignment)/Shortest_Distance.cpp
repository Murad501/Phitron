#include <bits/stdc++.h>
using namespace std;

const int N = 1005;
long long INF = 1e18;

vector<pair<int, long long>> v[N];
long long dis[N];

class cmp
{
public:
    bool operator()(pair<int, long long> a, pair<int, long long> b)
    {
        return a.second > b.second;
    }
};

void dijkstra(int src, int n)
{

    priority_queue<pair<int, long long>, vector<pair<int, long long>>, cmp> pq;
    pq.push({src, 0});
    dis[src] = 0;

    while (!pq.empty())
    {
        pair<int, long long> parent = pq.top();
        pq.pop();
        int node = parent.first;
        long long cost = parent.second;

        for (pair<int, long long> child : v[node])
        {
            int childNode = child.first;
            long long childCost = child.second;

            if (cost + childCost < dis[childNode])
            {
                dis[childNode] = cost + childCost;
                pq.push({childNode, dis[childNode]});
            }
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;

    for (int i = 0; i < e; i++)
    {
        int a, b;
        long long c;
        cin >> a >> b >> c;
        v[a].push_back({b, c});
    }

    int t;
    cin >> t;

    while (t--)
    {
        int s, d;
        cin >> s >> d;

        for (int i = 1; i <= n; i++)
        {
            dis[i] = INF;
        }

        dijkstra(s, n);

        if (dis[d] == INF)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << dis[d] << endl;
        }
    }

    return 0;
}
