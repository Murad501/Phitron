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
    int n, q;
    cin >> n >> q;
    vector<int> w(n + 1), cu_xor(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        cin >> w[i];
        cu_xor[i] = cu_xor[i - 1];
        cu_xor[i] ^= w[i];
    }

    vector<vector<int>> last(n + 1, vector<int>(32, 0));
    fill(last[0].begin(), last[0].end(), 0);
    for (int i = 1; i <= n; i++)
    {
        last[i] = last[i - 1];
        int msb = __lg(w[i]);
        last[i][msb] = i;
        for (int j = 30; j >= 0; j--)
        {
            last[i][j] = max(last[i][j], last[i][j + 1]);
        }
    }
    while (q--)
    {
        int x;
        cin >> x;
        int curr = n;
        while (curr >= 1 && x > 0)
        {
            int msb = __lg(x);
            int idx = last[curr][msb];

            x ^= (cu_xor[curr] ^ cu_xor[idx]);

            if (w[idx] > x || idx == 0)
            {
                curr = idx;
                break;
            }
            x ^= w[idx];
            curr = idx - 1;
        }
        cout << (n - curr) << " ";
    }
    cout << nl;
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