// 12/06/2025 21:35
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
    int n, k;
    cin >> n >> k;
    vector<int> v;
    vector<string> st;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        bitset<64> bt(x);
        string s;
        for (int i = 0; i < 64; i++)
        {
            if (bt[i] == 0)
            {
                s.push_back('0');
            }
            else
            {
                s.push_back('1');
            }
        }
        // reverse(all(s));
        st.push_back(s);
    }

    int ans = 0;
    for (int i = 0; i < 64; i++)
    {

        for (int j = 0; j < n; j++)
        {
            if (st[j][i] == '0')
            {
                int need = pow(2, i);
                if (k >= need)
                {
                    k -= need;
                    st[j][i] = '1';
                    ans++;
                }
            }
            else
            {
                ans++;
            }
        }
    }

    // for (int i = 0; i < n; i++)
    // {
    //     cout << st[i] << nl;
    // }
    cout << ans - n << nl;
    // cout << nl;
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