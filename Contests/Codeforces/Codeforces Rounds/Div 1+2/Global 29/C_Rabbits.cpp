    // 20/09/2025 21:59
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
        int n;
        cin >> n;
        string s;
        cin >> s;

        vector<pair<bool, bool>> pr;
        int idx = -1;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                if (i == n - 1 || i == 0)
                {
                    pr.push_back({true, true});
                    idx = i;
                }
                else if(idx == -1)
                {
                    pr.push_back({false, true});
                    idx = i;
                }
                else
                {
                    int diff = i - idx;
                    if (diff == 1)
                    {
                        pr.push_back({true, true});
                    }
                    else if (diff == 2)
                    {
                        pair<bool, bool> prev = pr[pr.size() - 1];
                        if (!prev.first && prev.second)
                        {
                            pr.push_back({true, false});
                        }
                        else if (prev.first && !prev.second)
                        {
                            pr.push_back({false, true});
                        }
                        else
                        {
                            pr.push_back({true, true});
                        }
                    }
                    else
                    {
                        pr.push_back({false, true});
                    }
                }
                idx = i;
            }
        }
        int sz = pr.size();
        bool ok = true;


        for (int i = 0; i < sz; i++)
        {

            if (!pr[i].first && pr[i].second)
            {
                if (i == (sz - 1))
                {
                    ok = false;
                    break;
                }
                else if (!pr[i + 1].first)
                {
                    // cout<<"hello"<<nl;

                    ok = false;
                    break;
                }
            }
            // else if (pr[i].first && !pr[i].second)
            // {
            //     if (i == 0)
            //     {
            //         ok = false;
            //         break;
            //     }
            //     else if (!pr[i - 1].second)
            //     {

            //         ok = false;
            //         break;
            //     }
            // }
        }

        if (ok)
        {
            yes;
        }
        else
        {
            no;
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