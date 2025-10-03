// 21/09/2025 20:42
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
    int n, m;
    cin >> n >> m;
    vector<int> cnt(m + 1);
    int curr = 0;
    map<int, set<int>> mp;
    set<int> s;

    for (int i = 0; i < n; i++)
    {
        int l;
        cin >> l;
        bool isUsed = false;
        for (int j = 0; j < l; j++)
        {
            int x;
            cin >> x;
            s.insert(x);
            mp[x].insert(i);
        }
    }

    if (s.size() != m)
    {
        no;
    }
    else
    {

        set<int> st;
        set<int>finals;
        int ans = 0;
        for (auto [key, values] : mp)
        {
            bool found = false, isFinals = false;;
            int sz = values.size();
            set<int> match;
            set<int> temp = st;
            for (auto ky : values)
            {
                if (st.count(ky))
                {
                    match.insert(ky);
                    found = true;
                }
                temp.insert(ky);
            }
            if(isFinals){
                continue;
            }
            if (!found)
            {
                ans++;
                st = temp;
            }
            else
            {

                st = match;
            }
        }

        cout << ans << nl;

        if (ans <= (n - 2))
        {
            yes;
        }
        else
        {
            no;
        }
    }
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