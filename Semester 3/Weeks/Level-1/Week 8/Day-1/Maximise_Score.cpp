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
        int n;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        int ans = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            int val;
            if (i == 0)
            {
                val = abs(v[i + 1] - v[0]);
            }
            else if (i == n - 1)
            {
                val = abs(v[i - 1] - v[n - 1]);
            }
            else
            {
                val = max(abs(v[i] - v[i - 1]), abs(v[i] - v[i + 1]));
            }
            ans = min(ans, val);
        }
        cout << ans << nl;
    }
    return 0;
}