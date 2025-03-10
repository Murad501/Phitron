#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define all(x) x.begin(), x.end()
#define ll long long int
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define cyes cout << "Yes" << '\n'
#define cno cout << "No" << '\n'
#define minus cout << -1 << '\n'
#define zero cout << 0 << '\n'

#define MuRAD_BOOST()                 \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

vector<pair<int, int>> d = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}, {1, 1}, {-1, 1}, {1, -1}, {-1, -1}};

void dfs(int si, int sj)
{
}

void solve()
{
    int n;
    cin >> n;
    int arr[n][n];
    int vis[n][n];
    int ax, ay, bx, by, cx, cy;
    cin >> ax >> ay >> bx >> by >> cx >> cy;
    ax--, ay--, bx--, by--, cx--, cy--;

    // cout << ax << " " << ay << " " << bx << " " << by << " " << cx << " " << cy << nl;

    memset(vis, 0, sizeof(vis));
    memset(arr, 0, sizeof(arr));

    for (int i = 0; i < n; i++)
    {
        arr[i][ax] = 1;
        arr[ay][i] = 1;
        vis[i][ax] = 1;
        vis[ay][i] = 1;
    }

    int dx[] = {1, -1, 1, -1};
    int dy[] = {1, -1, -1, 1};

    for (int i = 0; i < 4; i++)
    {
        int x = ax, y = ay;
        while (x < n && x >= 0 && y < n && y >= 0)
        {
            arr[y][x] = 1;
            vis[y][x] = 1;
            x += dx[i];
            y += dy[i];
        }
    }

    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == ay && j == ax)
            {
                cout << "A" << " ";
            }
            else if (i == by && j == bx)
            {
                cout << "B" << " ";
            }
            else if (i == cy && j == cx)
            {
                cout << "C" << " ";
            }
            else
            {
                cout << arr[i][j] << " ";
            }
        }
        cout << nl;
    }
}

int main()
{
    MuRAD_BOOST();
    solve();

    return 0;
}