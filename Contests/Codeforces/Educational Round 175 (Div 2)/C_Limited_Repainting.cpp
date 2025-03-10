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
    string s, temp;
    cin >> s;
    vector<int> v, a;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    int currMax = v[0];
    temp.push_back(s[0]);
    for (int i = 1; i < n; i++)
    {
        if (s[i] != s[i - 1])
        {
            temp.push_back(s[i]);
            a.push_back(currMax);
            currMax = v[i];
            if (i == n - 1)
            {
                a.push_back(currMax);
            }
        }
        else
        {
            currMax = max(currMax, v[i]);
            if (i == n - 1)
            {
                a.push_back(currMax);
            }
        }
    }

    int cnt_b = 0;
    int sz = temp.size();
    int min_B = INT_MAX, max_R = INT_MIN;
    for (int i = 0; i < sz; i++)
    {
        if (temp[i] == 'B')
        {
            cnt_b++;
            min_B = min(min_B, a[i]);
        }
        else
        {
            if (i == n - 1 || i == 0)
            {
                continue;
            }
            max_R = max(max_R, a[i]);
        }
    }

    // cout << a.size() << " " << temp.size() << nl;

    if (cnt_b <= k)
    {
        zero;
    }
    else
    {
        if (min_B >= max_R)
        {
            cout << max_R << nl;
        }
        else
        {
            cout << min_B << nl;
        }
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