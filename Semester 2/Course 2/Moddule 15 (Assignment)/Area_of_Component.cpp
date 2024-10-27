#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 10;
char a[N][N];
bool vis[N][N];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
int n, m;
int minArea = 0;
bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return true;
}
void dfs(int si, int sj)
{
    vis[si][sj] = true;
    if (a[si][sj] == '.')
    {
        minArea++;
    }
    for (int i = 0; i < 4; i++)
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if (valid(ci, cj) && !vis[ci][cj] && a[ci][cj] == '.')
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
            cin >> a[i][j];
        }
    }
    memset(vis, false, sizeof(vis));

    int currentMin = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!vis[i][j])
            {
                minArea = 0;
                dfs(i, j);
                if (minArea != 0)
                {
                    currentMin = min(currentMin, minArea);
                }
            }
        }
    }

    if (currentMin == INT_MAX)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << currentMin << endl;
    }

    return 0;
}