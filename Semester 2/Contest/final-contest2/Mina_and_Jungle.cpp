#include <bits/stdc++.h>
using namespace std;

bool vis[1005][1005];
long long int dis[1005][1005];
int jungle[1005][1005];
vector<pair<int, int>> d = {{-1, 1}, {-1, -1}, {1, 1}, {1, -1}};
int n, m;

bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return true;
}

void bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    dis[si][sj] = 0;
    while (!q.empty())
    {
        pair<int, int> par = q.front();
        int a = par.first, b = par.second;
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int ci = a + d[i].first;
            int cj = b + d[i].second;
            if (valid(ci, cj) == true && vis[ci][cj] == false)
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
                if (jungle[ci][cj] == -2)
                {
                    dis[ci][cj] = dis[a][b] + 0;
                }
                else if ((dis[ci][cj] > dis[a][b] + jungle[ci][cj]))
                {
                    dis[ci][cj] = dis[a][b] + jungle[ci][cj];
                }
            }
        }
    }
}

int main()
{

    int t;
    cin >> t;

    for (int q = 0; q < t; q++)
    {
        cin >> n >> m;

        int si, sj;
        int di, dj;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                dis[i][j] = -1;
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                vis[i][j] = false;
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                jungle[i][j] = false;
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                int x;
                cin >> x;
                if (x == -1)
                {
                    si = i;
                    sj = j;
                }
                else if (x == -2)
                {
                    di = i;
                    dj = j;
                }
                else if (x == 0)
                {
                    vis[i][j] = true;
                }
                jungle[i][j] = x;
            }
        }

        bfs(si, sj);

        if (vis[di][dj] == false)
        {
            cout << "Case " << q + 1 << ": " << "Impossible\n";
        }
        else
        {
            cout << "Case " << q + 1 << ": " << dis[di][dj] << "\n";
        }
    }

    return 0;
}