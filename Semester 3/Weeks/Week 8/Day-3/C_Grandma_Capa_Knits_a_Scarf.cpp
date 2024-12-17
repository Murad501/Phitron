#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define ll long long int

#define MuRAD_BOOST()                 \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

int main()
{
    MuRAD_BOOST();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        map<char, int> mp;
        for (char c : s)
        {
            mp[c]++;
        }

        int ans = 0;
        int l = 0, r = n - 1;
        while (l < r)
        {
            if (s[l] != s[r])
            {
                ans = INT_MAX;
                break;
            }
            l++;
            r--;
        }

        if (ans == INT_MAX)
        {
            for (auto [key, value] : mp)
            {
                string t = s;
                int count = 0;
                int l = 0, r = n - 1;

                while (l < r)
                {
                    if (t[l] != t[r])
                    {
                        if (t[l] == key)
                        {
                            while (t[l] == key && l < r)
                            {
                                count++;
                                l++;
                            }
                            if (t[l] != t[r])
                            {
                                count = -1;
                                break;
                            }
                        }
                        else if (t[r] == key)
                        {
                            while (t[r] == key && l < r)
                            {
                                count++;
                                r--;
                            }
                            if (t[l] != t[r])
                            {
                                count = -1;
                                break;
                            }
                        }
                        else
                        {
                            count = -1;
                            break;
                        }
                    }
                    else
                    {
                        l++;
                        r--;
                    }
                }

                if (count != -1)
                {
                    ans = min(ans, count);
                }
            }
        }
        if (ans == INT_MAX)
        {
            cout << -1 << nl;
        }
        else
        {
            cout << ans << nl;
        }
    }
    return 0;
}