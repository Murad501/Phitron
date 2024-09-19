#include <bits/stdc++.h>
using namespace std;

const int N = 1005;
vector<pair<long long int, long long int>> v[N];
long long int dis[N];
class cmp
{
public:
    bool operator()(pair<long long int, long long int> a, pair<long long int, long long int> b)
    {
        return a.second > b.second;
    }
};
void dijkstra(int src)
{
    priority_queue<pair<long long int, long long int>, vector<pair<long long int, long long int>>, cmp> pq;
    pq.push({src, 0});
    dis[src] = 0;
    while (!pq.empty())
    {
        pair<long long int, long long int> parent = pq.top();
        pq.pop();
        long long int node = parent.first;
        long long int cost = parent.second;
        for (pair<long long int, long long int> child : v[node])
        {
            long long int childNode = child.first;
            long long int childCost = child.second;
            long long int total = cost + childCost;
            if (total < dis[childNode])
            {
                // path relax
                dis[childNode] = total;
                pq.push({childNode, dis[childNode]});
            }
        }
    }
}
int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        v[a].push_back({b, c});
    }
    for (int i = 1; i <= n; i++)
    {
        dis[i] = INT_MAX;
    }
    int s;
    cin >> s;
    dijkstra(s);
    int t;
    cin >> t;
    while (t--)
    {
        int d, dw;
        cin >> d >> dw;
        if (dis[d] <= dw)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}