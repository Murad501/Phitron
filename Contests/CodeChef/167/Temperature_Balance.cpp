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
    vector<int> v;
    int first, last;
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (!flag)
        {
            if (x != 0)
            {
                first = i;
                flag = true;
            }
        }
        else
        {
            if (x != 0)
            {
                last = i;
            }
        }
        v.push_back(x);
    }

    int ans = 0;

    for (int i = first; i <= last; i++)
    {

        if (v[i] == v[i + 1])
        {
            v[i + 1] -= v[i];
            v[i + 1] -= v[i];
            ans += abs(v[i+1]);
            v[i] = 0;

        }
        else
        {
            v[i + 1] += v[i];
            ans += abs(v[i+1]);
            v[i] = 0;
            cout << v[i] << " ";
        }
        
    }
    cout << ans << nl;
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