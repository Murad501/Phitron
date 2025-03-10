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
    for (int i = 0; i < n - 2; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    bool ok = true;

    if (n > 2)
    {
        int i = 0, j = 1, k = 2;
        while (k < n - 2)
        {
            if (v[i] == 1 && v[j] == 0 && v[k] == 1)
            {
                ok = false;
                break;
            }
            i++, j++, k++;
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