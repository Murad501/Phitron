#include <bits/stdc++.h>
using namespace std;
int n, m;
char a[1005][1005];
bool vis[1005][1005];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

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

bool canGo = false;

void dfs(int si, int sj)
{

    if (a[si][sj] == 'B')
    {
        canGo = true;
        return;
    }
    vis[si][sj] = true;

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
    int rw = 0;
    int cl = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {

            char c;
            cin >> c;

            a[i][j] = c;
            if (a[i][j] == 'A')
            {
                rw = i;
                cl = j;
            }
        }
    }

    memset(vis, false, sizeof(vis));

    if (n > 1 && m > 1)
    {
        dfs(rw, cl);
    }

    if (canGo)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}