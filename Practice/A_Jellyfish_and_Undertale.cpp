#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        ll l, t, n;
        cin >> l >> t >> n;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        ll c = t;
        int cnt = 0;
        int i = 0;
        while (c != 0)
        {
            if (c == 1)
            {
                if (i != n)
                {
                    c = min(v[i] + c, l);
                    i++;
                }
            }
            c--;
            cnt++;
        }
        cout << cnt << endl;
    }

    return 0;
}