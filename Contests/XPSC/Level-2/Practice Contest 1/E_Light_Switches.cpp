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
    vector<ll> v;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end(), greater<ll>());

    ll start = v[0], end = v[0] + k;
    bool flag = true;
    vector<ll> candidateAns;
    for (int i = 0; i < n; i++)
    {
        ll need = start - v[i];
        ll div = need / k;
        if (need % k != 0)
        {
            div++;
        }

        // if (div % 2 == 0)
        // {
        //     div++;
        // }

        ll value = v[i] + (k * div);
        if(value < start){
            // value+=k;
            div++;
        }
        cout<<value<<" ";
        if ((div % 2 == 0 && i != 0) || v[i] + (k * div) > end)
        {
            flag = false;
            break;
        }
        else
        {
            candidateAns.push_back(v[i] + (k * div));
        }
    }
    cout<<nl;

    if (!flag)
    {
        minus;
    }
    // else
    // {
    //     // sort(candidateAns.begin(), candidateAns.end());
    //     // cout << candidateAns[candidateAns.size() - 1] << nl;
    //     // for (int i = 0; i < candidateAns.size(); i++)
    //     // {
    //     //     cout << candidateAns[i] << " ";
    //     // }
    // }
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