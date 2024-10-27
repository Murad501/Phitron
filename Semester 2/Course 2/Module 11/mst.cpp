#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
int parent[N];

int group_size[N];

void dsu_init(int n)
{
    for (int i = 0; i < n; i++)
    {
        parent[i] = -1;
        group_size[i] = 1;
    }
}

int dsu_find(int node)
{
    if (parent[node] == -1)
    {
        return node;
    }
    else
    {
        int leader = dsu_find(parent[node]);
        parent[node] = leader;
        return leader;
    }
}

void dsu_union_by_size(int a, int b)
{
    int leader_a = dsu_find(a);
    int leader_b = dsu_find(b);

    if (group_size[leader_a] > group_size[leader_b])
    {
        parent[leader_b] = leader_a;
        group_size[leader_a] += group_size[leader_b];
    }
    else
    {
        parent[leader_a] = leader_b;
        group_size[leader_b] += group_size[leader_a];
    }
}

class Edge
{
public:
    int u, v, w;
    Edge(int u, int v, int w)
    {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};

bool cmp(const Edge &a, const Edge &b)
{
    return a.w < b.w;
};

int main()
{
    int n, e;
    cin >> n >> e;
    dsu_init(n);
    vector<Edge> edgeList;
    while (e--)
    {
        int u, v, w;
        cin >> u >> v >> w;
        edgeList.push_back(Edge(u, v, w));
    }

    sort(edgeList.begin(), edgeList.end(), cmp);

    int totalCost = 0;

    for (Edge ed : edgeList)
    {
        int leaderU = dsu_find(ed.u);
        int leaderV = dsu_find(ed.v);
        if(leaderU == leaderV){
            continue;
        }else{
            dsu_union_by_size(ed.u, ed.v);
            totalCost += ed.w;
        }
    }

    cout << "Total Cost: " << totalCost << endl;

    return 0;
}