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
    vector<long double> v, ans;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    bool ok = true;
    ans.push_back(1);
    ans.push_back(v[1] / v[0]);
    for (int i = 2; i < n; i++)
    {
        int first = v[i];
        int second = v[i - 1];
        if (first % second == 0)
        {
            int times = first / second;
            ans.push_back(1LL * (ans[i - 1] * times));
        }
        else
        {
            ok = false;
            break;
        }
    }
    if (ok)
    {
        cyes;
    }
    else
    {
        cno;
    }
}

int main()
{
    MuRAD_BOOST();
    solve();

    return 0;
}