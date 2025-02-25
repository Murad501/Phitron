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
    int n;
    cin >> n;
    string s;
    cin >> s;
    ll one = 0;
    vector<ll> v, pre_sum;
    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] == '1')
        {
            one++;
        }
        else
        {
            v.push_back(one);
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        if (i == 0)
        {
            pre_sum.push_back(v[i]);
        }
        else
        {
            pre_sum.push_back(pre_sum[i - 1] + v[i]);
        }
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << pre_sum[i] << " ";
    }

    int need = n - v.size();
    for (int i = 0; i < need; i++)
    {
        cout << "-1" << " ";
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