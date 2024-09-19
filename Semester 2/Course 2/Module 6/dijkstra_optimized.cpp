#include <bits/stdc++.h>
using namespace std;

const int N = 100;
vector<pair<int, int>> v[N];
int disTance[N];

class cmp{
    public:
    bool operator()(pair<int, int> a, pair<int, int> b){
        return a.second > b.second;  // Min heap based on distance
    }
};

void dijkstra(int src)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> pq;
    pq.push({src, 0});
    disTance[src] = 0;

    while (!pq.empty())
    {
        pair<int, int> parent = pq.top();
        pq.pop();
        int node = parent.first;
        int cost = parent.second;

        for (pair<int, int> child : v[node])
        {
            int childNode = child.first;
            int childCost = child.second;
            if (disTance[childNode] > cost + childCost)
            {
                disTance[childNode] = cost + childCost;
                pq.push({childNode, disTance[childNode]});
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
        v[b].push_back({a, c}); // For undirected graph
    }

    for (int i = 0; i < n; i++)
    {
        disTance[i] = INT_MAX; // Initialize distance to all nodes as infinity
    }

    dijkstra(0);

    for (int i = 0; i < n; i++)
    {
        cout << "Distance from node 0 to " << i << ": " << disTance[i] << endl;
    }

    return 0;
}