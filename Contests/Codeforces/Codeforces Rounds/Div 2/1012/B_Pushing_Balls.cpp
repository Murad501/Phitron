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

void solve()
{
    int n, m;
    cin >> n >> m;
    char arr[n][m];

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < m; j++)
        {
            arr[i][j] = s[j];
        }
    }

    bool ok = true;
    for (int i = 1; i < n; i++)
    {

        for (int j = 1; j < m; j++)
        {

            if (arr[i][j] == '1')
            {
                bool flag1 = true;
                bool flag2 = true;

                for (int k = 0; k <= i; k++)
                {

                    if (arr[k][j] == '0')
                    {

                        flag1 = false;
                    }
                }

                for (int k = 0; k <= j; k++)
                {

                    if (arr[i][k] == '0')
                    {

                        flag2 = false;
                    }
                }

                if (!flag1 && !flag2)
                {
                    ok = false;
                    break;
                }
            }
        }
    }
    if (ok)
    {
        yes;
    }
    else
    {
        no;
    }
}

int main()
{
    MuRAD_BOOST();
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}