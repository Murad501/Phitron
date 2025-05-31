// 21/05/2025 20:49
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define int long long
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
    int n, x;
    cin >> n >> x;
    vector<int> v;
    int mxBit = (__lg(x));
    bitset<32> bs(x);

    string s;
    for (int i = mxBit; i >= 0; i--)
    {
        s.push_back(bs[i] + '0');
    }

    int sz = s.size();
    reverse(s.begin(), s.end());
    for (int i = 0; i < sz; i++)
    {
        if (s[i] == '1')
        {
            int curr = (1 << i);

            int vz = v.size();
            for (int j = 0; j < vz; j++)
            {
                v.push_back(curr + v[j]);
            }
            v.push_back(curr);
        }
    }

    int m = v.size();
    sort(all(v));

    vector<int> ans(n + 1, 0);
    set<int> st;

    for (int i = 0; i < m; i++)
    {
        int val = v[i];
        if (val <= n)
        {
            int y = (x - val);
            if (y == 0)
            {
                st.insert(val);
                ans[val] = val;
            }
            else
            {
                ans[val] = (x - val);
                st.insert((x - val));
            }
        }
    }

    int curr = 1;

    for (int i = 1; i <= n; i++)
    {
        if (!st.count(i))
        {
            cout << i << " ";
        }
        else
        {
            cout << ans[i] << " ";
        }
    }
    cout << nl;
}

int32_t main()
{
    MuRAD_BOOST();
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}