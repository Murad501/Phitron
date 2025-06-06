#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
bool vis[N];
bool pathVisit[N];
vector<int> adj[N];

bool ans;

void dfs(int par)
{
    vis[par] = true;
    pathVisit[par] = true;
    cout << par << " ";
    for (int child : adj[par])
    {
        if (pathVisit[child])
        {
            ans = true;
        }
        if (!vis[child])
        {

            dfs(child);
        }
    }
    pathVisit[par] = false;
}

int main()
{
    int n, e;
    cin >> n >> e;

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
    }
    memset(vis, false, sizeof(vis));
    memset(pathVisit, false, sizeof(pathVisit));
    ans = false;

    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            dfs(i);
        }
    }

    if (ans)
    {
        cout << "Cycle detected\n";
    }
    else
    {
        cout << "No cycle detected\n";
    }

    return 0;
}