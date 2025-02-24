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
    map<int, int> mp;

    ll multiply = 1;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        mp[x]++;
        multiply *= x;
        multiply/=k;
    }

    if (multiply % k == 0)
    {
        zero;
    }
    else
    {
        int ans = 4;
        vector<int> v;
        for (auto [key, value] : mp)
        {
            ll temp = multiply;
            v.push_back(key);
            temp /= key;
            temp *= (key + 1);
            if (temp % k == 0)
            {
                ans = 1;
            }
        }
        int sz = v.size();

        if (ans > 1)
        {
            for (auto [key, value] : mp)
            {
                if (value > 1)
                {
                    ll temp = multiply;
                    temp /= key;
                    temp /= key;
                    temp *= (key + 1);
                    temp *= (key + 1);
                    if (temp % k == 0)
                    {
                        ans = 2;
                    }
                }
            }

            if (ans > 2)
            {
                for (int i = 0; i < sz; i++)
                {
                    ll temp = multiply;
                    temp /= v[i];
                    temp *= (v[i] + 2);
                    if (temp % k == 0)
                    {
                        ans = 2;
                    }
                }
            }

            if (ans > 2)
            {
                for (int i = 0; i < sz - 1; i++)
                {
                    for (int j = i + 1; j < sz; j++)
                    {
                        ll temp = multiply;
                        temp /= v[i];
                        temp /= v[j];
                        temp *= (v[i] + 1);
                        temp *= (v[j] + 1);
                        if (temp % k == 0)
                        {
                            ans = 2;
                        }
                    }
                }
            }
        }

        if (ans > 2)
        {
            for (int i = 0; i < sz; i++)
            {
                ll temp = multiply;
                temp /= v[i];
                temp *= (v[i] + 3);
                if (temp % k == 0)
                {
                    ans = 3;
                }
            }

            for (int i = 0; i < sz; i++)
            {
                for (int j = i + 1; j < sz; j++)
                {
                    if (i == j)
                    {
                        continue;
                    }
                    ll temp = multiply;
                    temp /= v[i];
                    temp /= v[j];
                    temp *= (v[i] + 2);
                    temp *= (v[j] + 1);
                    if (temp % k == 0)
                    {
                        ans = 3;
                    }
                }
            }

            if (ans > 3)
            {
                for (int i = 0; i < sz; i++)
                {

                    for (int j = 0; j < sz; j++)
                    {
                        if (i == j)
                        {
                            continue;
                        }
                        for (int l = 0; l < sz; l++)
                        {
                            if (j == l || i == l)
                            {
                                continue;
                            }

                            ll temp = multiply;
                            temp /= v[i];
                            temp /= v[j];
                            temp /= v[l];

                            temp *= (v[i] + 1);
                            temp *= (v[j] + 1);
                            temp *= (v[l] + 1);

                            if (temp % k == 0)
                            {

                                ans = 3;
                            }
                        }
                    }
                }
            }
        }
        cout << ans << nl;
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