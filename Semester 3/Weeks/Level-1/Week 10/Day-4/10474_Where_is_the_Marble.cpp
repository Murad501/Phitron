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
    int current = 0;
    while (true)
    {
        int n, q;
        cin >> n >> q;

        if (n == 0 && q == 0)
        {
            break;
        }
        current++;
        cout << "CASE# " << current << ":" << nl;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        for (int i = 0; i < q; i++)
        {

            int x;
            cin >> x;
            int idx = -1, l = 0, r = n - 1, mid;
            while (l <= r)
            {
                mid = (l + r) / 2;
                if (v[mid] == x)
                {
                    idx = mid;
                    r = mid - 1;
                }
                else if (v[mid] > x)
                {
                    r = mid - 1;
                }
                else
                {
                    l = mid + 1;
                }
            }
            if (idx == -1)
            {
                cout << x << " not found" << nl;
            }
            else
            {
                cout << x << " found at " << idx + 1 << nl;
            }
        }
    }
}

int main()
{
    MuRAD_BOOST();
    solve();

    return 0;
}