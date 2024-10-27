#include <bits/stdc++.h>
using namespace std;

using ll = long long;

const int N = 1e5 + 10;

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

bool comp(Edge a, Edge b)
{
    if (a.w < b.w)
        return true;
    else
        return false;
}

int leader[N];
int group_size[N];

void dsu_init(int n)
{

    for (int i = 1; i <= n; i++)
    {
        leader[i] = -1;
        group_size[i] = 1;
    }
}

int Find(int node)
{
    if (leader[node] == -1)
        return node;

    int l = Find(leader[node]);
    leader[node] = l;
    return l;
}

void Union(int x, int y)
{

    int leaderA = Find(x);
    int leaderB = Find(y);

    if (group_size[leaderA] > group_size[leaderB])
    {

        leader[leaderB] = leaderA;
        group_size[leaderA] += group_size[leaderB];
    }
    else
    {
        leader[leaderA] = leaderB;
        group_size[leaderB] += group_size[leaderA];
    }
}

int main()
{
    int n, m;
    cin >> n >> m;

    dsu_init(n);

    vector<Edge> EdgeList;

    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;

        EdgeList.push_back(Edge(u, v, w));
    }

    sort(EdgeList.begin(), EdgeList.end(), comp);

    long long cost = 0;

    set<int> cities;

    for (Edge ed : EdgeList)
    {
        int u_er_leader = Find(ed.u);
        int v_er_leader = Find(ed.v);

        if (u_er_leader != v_er_leader)
        {
            Union(ed.u, ed.v);
            cost += ed.w;
            cities.insert(ed.v);
            cities.insert(ed.u);
        }
    }

    if (cities.size() < n)
    {
        cout << "Not Possible" << endl;
    }
    else
    {

        cout << m - (n - 1) << " " << cost << endl;
    }

    return 0;
}