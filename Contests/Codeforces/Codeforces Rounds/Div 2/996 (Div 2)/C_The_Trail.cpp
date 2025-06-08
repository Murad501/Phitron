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
    string s;
    cin >> s;
    ll arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    vector<ll> row_sum(n), col_sum(m);
    ll need = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        ll sum = 0;
        for (int j = 0; j < m; j++)
        {

            sum += arr[i][j];
        }
        need = max(need, sum);
        row_sum[i] = sum;
    }
    for (int j = 0; j < m; j++)
    {
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {

            sum += arr[i][j];
        }
        need = max(need, sum);
        col_sum[j] = sum;
    }

    if (n != m)
    {
        need = 0;
    }

    int c = 0, r = 0;
    int sz = s.size();
    for (int i = 0; i < sz; i++)
    {
        ll r_sum = row_sum[r];
        ll c_sum = col_sum[c];
        ll current_sum;
        if (s[i] == 'R')
        {
            current_sum = c_sum;
        }
        else
        {
            current_sum = r_sum;
        }
        ll currentNeed = need - current_sum;

        row_sum[r] = currentNeed + row_sum[r];
        col_sum[c] = currentNeed + col_sum[c];
        arr[r][c] = currentNeed;
        if (s[i] == 'R')
        {
            c++;
        }
        else
        {
            r++;
        }
    }
    ll last_need = need - row_sum[r];
    arr[r][c] = last_need;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << nl;
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