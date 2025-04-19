#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define all(x) x.begin(), x.end()
#define ll long long int
#define N 1000000
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define cyes cout << "Yes" << '\n'
#define cno cout << "No" << '\n'
#define minus cout << -1 << '\n'
#define zero cout << 0 << '\n'
vector<int> v(N, 0), ans(N, 0);

#define MuRAD_BOOST()                 \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

void solve()
{
    int n, k, q;
    cin >> n >> k >> q;

    for (int i = 0; i < n; i++)
    {
        int l, r;
        cin >> l >> r;
        v[l]++;
        v[r + 1]--;
    }

    for (int i = 1; i < N; i++)
    {
        v[i] += v[i - 1];
        ans[i] += ans[i - 1];
        if (v[i] >= k)
        {
            ans[i]++;
        }
    }

    for (int i = 0; i < q; i++)
    {
        int a, b;
        cin >> a >> b;

        cout << ans[b] - ans[a - 1] << nl;
    }
}

int main()
{
    MuRAD_BOOST();
    solve();

    return 0;
}