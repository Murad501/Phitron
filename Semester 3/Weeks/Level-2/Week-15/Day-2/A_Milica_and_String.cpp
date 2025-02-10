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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int cnt = 0, last_idx = -1;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'B')
        {
            cnt++;
            last_idx = i;
        }
    }
    if (cnt == k)
    {
        cout << 0 << nl;
    }
    else if (k == 0)
    {
        cout << 1 << nl;
        cout << n << " " << "A" << nl;
    }
    else if (cnt > k)
    {
        int id = 0, curr = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == 'B')
            {
                curr++;
            }
            if (curr == k)
            {
                id = i;
                break;
            }
        }
        cout << 1 << nl;
        cout << id << " " << "A" << nl;
    }
    else
    {

        int id = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'A')
            {
                cnt++;
                if (cnt == k)
                {
                    id = i + 1;
                    break;
                }
            }
        }

        cout << 1 << nl;
        cout << id << " " << "B" << nl;
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