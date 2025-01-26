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
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mp[x]++;
    }

    vector<int> candidateAns;
    for (auto [key, value] : mp)
    {
        if (value >= k)
        {
            candidateAns.push_back(key);
        }
    }

    if (candidateAns.size() == 0)
    {
        minus;
    }
    else
    {
        int ans_left = candidateAns[0], ans_right = candidateAns[0];
        int left = candidateAns[0], right = candidateAns[0];
        int sz = candidateAns.size();
        for (int i = 1; i < sz; i++)
        {
            if (candidateAns[i] - candidateAns[i - 1] > 1)
            {
                left = candidateAns[i];
                right = candidateAns[i];
            }
            else
            {
                right = candidateAns[i];
            }
            if (right - left > ans_right - ans_left)
            {
                ans_left = left;
                ans_right = right;
            }
        }

        cout << ans_left << " " << ans_right << nl;
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