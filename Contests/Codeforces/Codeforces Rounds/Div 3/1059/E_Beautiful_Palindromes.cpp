// 17/10/2025 22:18
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
    vector<int> v;
    set<int> st;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        st.insert(x);
    }
    int missing = n - st.size();
    if (missing)
    {
        
        int curr = 1;
        vector<int> notMiss(n+1);
        vector<int>miss;
        for (auto key : st)
        {
            notMiss[key] = 1;
        }
        for (int i = 1; i <= n; i++)
        {
             if(notMiss[i] == 0){
                miss.push_back(i);
             }
        }
        int a = miss[0], b, c;
        // cout<<"i"<<miss.size()<<" "<<missing<<nl;
        if (miss.size() >= 2)
        {
            b = miss[1];
            if (miss.size() >= 3)
            {
                c = miss[2];
            }
            else
            {
                c = v[n - 1];
            }
        }
        else
        {
            if (v[n - 1] == v[n - 2])
            {
                b = v[n - 3];
                c = v[n - 1];
            }
            else
            {
                b = v[n - 2];
                c = v[n - 1];
            }
        }
        for (int i = 1; i <= k; i++)
        {
            if (i % 3 == 0)
            {
                cout << c << " ";
            }
            else if (i % 3 == 2)
            {
                cout << b << " ";
            }
            else
            {
                cout << a << " ";
            }
        }
        cout << nl;
    }
    else
    {
        // for (int i = 0; i < n; i++)
        // {
        //     cout << v[i] << " ";
        // }
        for (int i = 0; i < k; i++)
        {
            cout << v[i] << " ";
        }
        cout<<nl;
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