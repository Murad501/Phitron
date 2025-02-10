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
    int n, c, q;
    cin >> n >> c >> q;
    string s;
    cin >> s;
    vector<string> essay;
    essay.push_back(s);
    while (c--)
    {
        ll l, r;
        cin >> l >> r;
        ll need = r - (l - 1);
        int i = 0;
        vector<string> v;
        ll sz = 0;

        while (i < essay.size() && need > 0)
        {
            string temp = essay[i];
            
            if ((sz + temp.size()) < l)
            {
                sz += temp.size();
                continue;
            }

            if (temp.size() <= need)
            {
                need -= temp.size();
                v.push_back(temp);
            }
            else
            {
                v.push_back(temp.substr(0, need));
                need = 0;
            }
        }
        for (int i = 0; i < v.size(); i++)
        {
            essay.push_back(v[i]);
        }
    }
    for (int i = 0; i < essay.size(); i++)
    {
        cout << essay[i];
    }
    cout << nl;
    while (q--)
    {
        ll x;
        cin >> x;
        // cout << s[x - 1] << nl;
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