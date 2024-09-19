#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
bool vis[N];
vector<int> adj[N];
int parent[N];
bool ans;

void bfs(int s)
{
    queue<int> q;
    q.push(s);
    vis[s] = true;
    while (!q.empty())
    {
        int par = q.front();
        cout << par << " ";
        q.pop();
        for (int child : adj[par])
        {

            if (!vis[child])
            {
                vis[child] = true;
                parent[child] = par;
                q.push(child);
            }
            else if (vis[child] && parent[par] != child)
            {
                ans = true;
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
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    memset(vis, false, sizeof(vis));
    memset(parent, 0, sizeof(parent));
    ans = false;

    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            bfs(i);
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