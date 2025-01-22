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
    int n;
    cin >> n;
    vector<int> a, b;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        b.push_back(x);
    }
    int negative_cnt = 0, negative_diff = INT_MIN, positive_diff = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < b[i])
        {
            negative_cnt++;
            negative_diff = max(negative_diff, abs(a[i] - b[i]));
        }
        else
        {
            positive_diff = min(positive_diff, abs(a[i] - b[i]));
        }
    }

    if (negative_cnt > 1 || negative_diff > positive_diff)
    {
        no;
    }
    else
    {
        yes;
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