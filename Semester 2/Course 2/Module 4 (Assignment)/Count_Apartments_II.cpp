#include <bits/stdc++.h>
using namespace std;
int n, m;
char a[1005][1005];
bool vis[1005][1005];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
vector<int> val;

int initial = 0;

bool valid(int ci, int cj)
{
    if (ci < 0 || ci >= n || cj < 0 || cj >= m)
    {
        return false;
    }
    else
    {
        return true;
    }
}

void dfs(int si, int sj)
{

    vis[si][sj] = true;
    initial++;

    for (int i = 0; i < 4; i++)
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;

        if (valid(ci, cj) && !vis[ci][cj] && a[ci][cj] != '#')
        {
            dfs(ci, cj);
        }
    }
}

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            char c;
            cin >> c;
            a[i][j] = c;
        }
    }

    memset(vis, false, sizeof(vis));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!vis[i][j] && a[i][j] != '#')
            {
                initial = 0;
                dfs(i, j);
                val.push_back(initial);
            }
        }
    }

    sort(val.begin(), val.end());
    if (val.size())
    {
        for (int v : val)
        {
            cout << v << " ";
        }
    }
    else
    {
        cout << 0;
    }

    return 0;
}