
#include <bits/stdc++.h>
using namespace std;

char a[50][50];
bool vis[50][50];
int dis[50][50];
vector<pair<int, int>> d;
int n;

bool valid(int ci, int cj)
{
    if (ci >= 0 && ci < n && cj >= 0 && cj < n)
        return true;
    else
        return false;
};

void bfs(int si, int sj)
{
    d.push_back({0, 1});
    d.push_back({0, -1});
    d.push_back({-1, 0});
    d.push_back({1, 0});
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    dis[si][sj] = 0;

    while (!q.empty())
    {
        pair<int, int> par = q.front();
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int ci = par.first + d[i].first;
            int cj = par.second + d[i].second;
            if (valid(ci, cj) && !vis[ci][cj] && a[ci][cj] != 'T')
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
                dis[ci][cj] = dis[par.first][par.second] + 1;
            }
        }
    }
}

int main()
{
    int si, sj, di, dj;

    while (cin >> n)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
                if (a[i][j] == 'S')
                {
                    si = i;
                    sj = j;
                }
                else if (a[i][j] == 'E')
                {
                    di = i;
                    dj = j;
                }
            }
        }
    }
    memset(vis, false, sizeof(vis));
    memset(dis, -1, sizeof(dis));
    bfs(si, sj);
    cout << dis[di][dj] << endl;

    return 0;
}
