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

        vector<pair<int, int>> s;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }

        int zero = 0, one = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == 0)
            {
                zero++;
            }
            else
            {
                one++;
            }

            s.push_back({zero, one});
        }

        ll ans = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (v[i] == 0)
            {
                ans += s[i].second;
            }
        }
        vector<ll> tempAns;
        for (int i = 0; i < n; i++)
        {
            ll temp = ans;
            if (v[i] == 0)
            {
                temp -= (s[i].second + s[i].first);
                temp += s[n - 1].first;
            }
            else
            {
                temp += (s[i].second - 1);
                temp -= (s[n - 1].first - s[i].first);
            }

            if (temp > ans)
            {
                tempAns.push_back(temp);
            }
        }
        sort(tempAns.begin(), tempAns.end());
        if (!tempAns.empty() && tempAns[tempAns.size() - 1] > ans)
        {
            ans = tempAns[tempAns.size() - 1];
        }
        cout << ans << nl;
    }

    return 0;
}