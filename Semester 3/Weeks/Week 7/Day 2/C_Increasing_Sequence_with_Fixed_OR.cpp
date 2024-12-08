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
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        vector<ll> ans;
        ans.push_back(x);
        int maxBit = __lg(x);
        for (int k = 0; k <= maxBit; k++)
        {
            if ((x >> k) & 1)
            {
                ll val = x - (1LL << k);
                if (val > 0)
                {
                    ans.push_back(val);
                }
            }
        }
        cout << ans.size() << nl;

        sort(ans.begin(), ans.end());
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }

        cout << nl;
    }

    return 0;
}