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
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    vector<int> values;
    for (int i = 0; i < 5; i++)
    {
        values.push_back((pow(2, i) - 1));
    }

    bool ok = true;
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] > v[i + 1])
        {
            bool found = false;
            for (int j = 0; j < 5; j++)
            {
                if (values[j] == i)
                {
                    found = true;
                    break;
                }
            }
            if (!found)
            {
                ok = false;
                break;
            }
            int diff = v[i] - v[i + 1];
            for (int j = 0; j < i; j++)
            {
                v[j] -= diff;
            }
        }
    }
    if (ok)
    {
        yes;
    }
    else
    {
        no;
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