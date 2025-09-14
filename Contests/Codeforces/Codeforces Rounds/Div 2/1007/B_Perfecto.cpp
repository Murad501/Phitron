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
    ll n;
    cin >> n;
    ll sum = 1LL * ((n * (n + 1)) / 2);
    ll sq = sqrt(sum);
    if (sq * sq == sum)
    {
        minus;
    }
    else
    {
        queue<ll> q;
        vector<ll> ans;
        ll currSum = 0;
        while (true)
        {
            ll tempSum = currSum;
            tempSum += n;
            ll currSq = sqrt(tempSum);
            if (currSq * currSq == tempSum)
            {
                q.push(n);
            }
            else
            {
                currSum += n;
                ans.push_back(n);
            }
            n--;
            if (n == 0)
            {
                break;
            }
        }

        while (!q.empty())
        {
            ans.push_back(q.front());
            q.pop();
        }

        int sz = ans.size();
        for (int i = 0; i < sz; i++)
        {
            cout << ans[i] << " ";
        }
        cout << nl;
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