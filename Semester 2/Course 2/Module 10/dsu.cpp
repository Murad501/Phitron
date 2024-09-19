#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int par[N];
int group_size[N];
int level[N];

void dsu_initialize(int n)
{
    for (int i = 0; i < n; i++)
    {
        par[i] = -1;
        group_size[i] = 1;
        level[i] = 0;
    };
}

int dsu_find(int node)
{
    if (par[node] == -1)
    {
        return node;
    }
    int leader = dsu_find(par[node]);
    par[node] = leader;
    return leader;
}

void dsu_union(int a, int b)
{
    int leader_a = dsu_find(a);
    int leader_b = dsu_find(b);
    par[leader_a] = leader_b;
}
void dsu_union_by_size(int a, int b)
{
    int leader_a = dsu_find(a);
    int leader_b = dsu_find(b);
    if (group_size[leader_a] > group_size[leader_b])
    {
        par[leader_b] = leader_a;
        group_size[leader_a] += group_size[leader_b];
    }
    else
    {
        par[leader_a] = leader_b;
        group_size[leader_b] += group_size[leader_a];
    }
}

void dsu_union_by_level(int a, int b)
{
    int leader_a = dsu_find(a);
    int leader_b = dsu_find(b);
    if (level[leader_a] > level[b])
    {
        par[leader_b] = leader_a;
    }
    else if (level[leader_b] > level[a])
    {
        par[leader_a] = leader_b;
    }
    else
    {
        par[leader_a] = leader_b;
        level[leader_b]++;
    }
}

int main()
{
    dsu_initialize(7);
    dsu_union_by_level(1, 2);
    dsu_union_by_level(2, 3);
    dsu_union_by_level(4, 5);
    dsu_union_by_level(5, 6);

    cout << dsu_find(1) << endl;
    cout << dsu_find(4) << endl;


    return 0;
}