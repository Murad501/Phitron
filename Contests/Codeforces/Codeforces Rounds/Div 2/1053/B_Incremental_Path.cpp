// 24/09/2025 17:52
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
    string s;
    cin >> s;
    set<int> st;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        st.insert(x);
    }
    int curr = 1;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
        {
            curr++;
            st.insert(curr);
        }
        else
        {
            auto it = st.upper_bound(curr);
            if (it == st.end())
            {
                curr++;
                st.insert(curr);
                curr++;
            }
            else
            {
                while (it != st.end() && abs(curr - *it) == 1)
                {
                    curr++;
                    it = st.upper_bound(curr);
                }

                if (it == st.end())
                {
                    curr++;
                    st.insert(curr);
                    curr++;
                }
                else
                {
                    curr++;
                    st.insert(curr);

                    it = st.upper_bound(curr);

                    while (it != st.end() && abs(curr - *it) == 1)
                    {
                        curr++;
                        it = st.upper_bound(curr);
                    }

                    curr++;
                }
            }
        }
    }

    cout << st.size() << nl;
    for (auto key : st)
    {
        cout << key << " ";
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