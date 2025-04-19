#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'
typedef long long ll;
typedef vector<ll> vl;
const ll MOD = 998244353;
const ll N = 2e3 + 1;
vl v1(26);
map<tuple<ll, ll, ll>, ll> m1;
ll fun(ll i, ll odd, ll even)
{
    if (i == 26)
        return 1;
    if (v1[i] == 0)
        return fun(i + 1, odd, even);
    if (m1.find({i, odd, even}) != m1.end())
        return m1[{i, odd, even}];
    else if (odd >= v1[i] && even >= v1[i])
    {
        return m1[{i, odd, even}] = fun(i + 1, odd - v1[i], even) % MOD + fun(i + 1, odd, even - v1[i]) % MOD;
    }
    else if (odd >= v1[i])
    {
        return m1[{i, odd, even}] = fun(i + 1, odd - v1[i], even) % MOD;
    }
    else if (even >= v1[i])
    {
        return m1[{i, odd, even}] = fun(i + 1, odd, even - v1[i]) % MOD;
    }
    else
        return 0;
}
void solve()
{
    m1.clear();
    ll sum = 0, i, j, ans = 1;
    for (i = 0; i < 26; i++)
    {
        cin >> v1[i];
        sum += v1[i];
    }
    ll odd = sum / 2;
    ll even = sum / 2;

    if (sum & 1)
        odd++;
    for (i = 2; i <= odd; i++)
    {
        ans *= i;
        ans %= MOD;
    }
    for (i = 2; i <= even; i++)
    {
        ans *= i;
        ans %= MOD;
    }

    for (i = 0; i < 26; i++)
    {
        for (ll j = 2; j <= v1[i]; j++)
        {
            ll x = j, y = MOD - 2, p = MOD, res = 1;
            x = x % p;
            while (y > 0)
            {
                if (y & 1)
                    res = (res * x) % p;
                y = y >> 1;
                x = (x * x) % p;
            }
            ans *= res;
            ans %= MOD;
        }
    }

    cout << (ans * fun(0, odd, even)) % MOD << '\n';
    // cout << ans << '\n';
}

int main()
{
    op() int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++)
    {
        // cout << "Case " << t << ": ";
        solve();
    }
}