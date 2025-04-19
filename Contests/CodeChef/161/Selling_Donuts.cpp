#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define ll long long int

#define MuRAD_BOOST()                 \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

int main()
{
    MuRAD_BOOST();
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        map<int, int> d;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            d[i + 1] = x;
        }

        vector<int> c;
        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            c.push_back(x);
        }

        int ans = 0;
        for (int i = 0; i < m; i++)
        {
            int id = c[i];
            auto it = d.find(id);
            if (it->second > 0)
            {
                d[id]--;
            }
            else
            {
                ans++;
            }
        }
        cout << ans << nl;
    }

    return 0;
}