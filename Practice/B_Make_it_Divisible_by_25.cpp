        // 12/08/2025 16:54
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
            string s;
            cin >> s;
            // 00
            // 25
            // 50
            // 75

            reverse(s.begin(), s.end());
            int ans = INT_MAX;
            int n = s.size();
            for (int i = 0; i < n - 1; i++)
            {
                for (int j = i + 1; j < n; j++)
                {
                    if (s[i] == '0' && s[j] == '0')
                    {
                        ans = min(ans, (j - 1));
                    }
                    else if (s[i] == '5' && s[j] == '2')
                    {
                        ans = min(ans, (j - 1));
                    }
                    else if (s[i] == '0' && s[j] == '5')
                    {
                        ans = min(ans, (j - 1));
                    }
                    else if (s[i] == '5' && s[j] == '7')
                    {
                        ans = min(ans, (j - 1));
                    }
                }
            }
            cout<<ans<<nl;
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