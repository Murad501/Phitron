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
    vector<int> v;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        mp[x]++;
    }
    bool isSame = false;
    if (v[0] == v[n - 1])
    {
        isSame = true;
    }

    if (isSame)
    {
        if (mp[v[0]] >= k)
        {
            yes;
        }
        else
        {
            no;
        }
    }
    else
    {

        int cntFirst = 0, cntLast = 0;
        for (int i = 0; i < n; i++)
        {
            if (cntFirst == k)
            {
                if (v[i] == v[n - 1])
                {
                    cntLast++;
                }
            }
            else
            {
                if (v[i] == v[0])
                {
                    cntFirst++;
                }
            }
        }
        if (cntFirst >= k && cntLast >= k)
        {
            yes;
        }
        else
        {
            no;
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