// 26/11/2025 21:26
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define int long long
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
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
    int sum = 0;
    int i = k - 2, j = k;
    vector<int> ans;
    ans.push_back(k);
    if (s[k - 1] == '1')
    {
        sum++;
    }
    int mv = 1;
    bool isOk = true;

    if (k == 1 || k == n)
    {
    }
    else
    {

        while (i >= 0)
        {
            if (s[i] == '1')
            {
                if (mv & 1)
                {
                    sum--;
                }
                else
                {
                    sum++;
                }
            }
            ans.push_back(i + 1);
            i--;
            mv++;
        }
        i = n - 1;
        while (i >= k)
        {
            if (s[i] == '1')
            {
                if (mv & 1)
                {
                    sum--;
                }
                else
                {
                    sum++;
                }
            }
            ans.push_back(i + 1);
            i--;
            mv++;
        }
        if (sum > 0)
        {
            for (auto key : ans)
            {
                cout << key << " ";
            }
            cout << nl;
        }
        else
        {

            sum = 0;
            ans.clear();
            vector<int> ans;
            ans.push_back(k);
            mv = 1;
            if (s[k - 1] == '1')
            {
                sum++;
            }
            while (j < n)
            {
                if (s[j] == '1')
                {
                    if (mv & 1)
                    {
                        sum--;
                    }
                    else
                    {
                        sum++;
                    }
                }
                ans.push_back(j + 1);
                j++;
                mv++;
            }

            j = 0;
            while (j < k - 1)
            {
                if (s[j] == '1')
                {
                    if (mv & 1)
                    {
                        sum--;
                    }
                    else
                    {
                        sum++;
                    }
                }
                ans.push_back(j + 1);
                j++;
                mv++;
            }

            if (sum > 0)
            {
                for (auto key : ans)
                {
                    cout << key << " ";
                }
                cout << nl;
            }
            else
            {
                minus;
            }
        }
    }
}

int32_t main()
{
    MuRAD_BOOST();
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}