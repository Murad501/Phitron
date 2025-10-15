// 03/10/2025 21:35
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define int long long
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
    int n, q;
    cin >> n >> q;
    vector<int> v, ones, zeros;
    int cntO = 0, cntZ = 0;
    set<int> idxsO, idxsZ;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        if (x == 0)
        {
            cntO++;
        }
        else
        {
            cntZ++;
        }

        if (i > 0)
        {
            if (x == v[i - 1])
            {
                if (x == 1)
                {
                    idxsO.insert(i);
                }
                else
                {
                    idxsZ.insert(i);
                }
            }
        }

        zeros.push_back(cntZ);
        ones.push_back(cntO);
    }

    // for(auto key:idxsO){
    //     cout<<key<<" ";
    // }
    // cout<<nl;
    // for(auto key:idxsZ){
    //     cout<<key<<" ";
    // }
    // cout<<nl;

    for (int i = 0; i < q; i++)
    {
        int l, r;
        cin >> l >> r;
        // cout<<l<<" "<<r<<nl;
        int O = ones[r - 1], Z = zeros[r - 1];
        if (l > 1)
        {
            O -= ones[l - 2];
            Z -= zeros[l - 2];
        }
        if (O % 3 || Z % 3)
        {
            minus;
        }
        else
        {
            if (O == 0 || Z == 0)
            {
                cout << (O + Z) / 3 << nl;
            }
            else
            {
                auto it = idxsO.lower_bound(l);
                bool ok = false;
                if (it != idxsO.end())
                {
                    if (*it < r)
                    {
                        ok = true;
                    }
                }

                if (!ok)
                {
                    it = idxsZ.lower_bound(l);
                    if (it != idxsZ.end())
                    {
                        if (*it < r)
                        {
                            ok = true;
                        }
                    }
                }

                // cout<<"hello"<<nl;

                if (ok)
                {
                    cout << (O + Z) / 3 << nl;
                }
                else
                {
                    cout << ((O + Z) / 3) + 1 << nl;
                }
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