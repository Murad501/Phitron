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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        queue<char> q;
        int ans = INT_MAX, l = 0, r = 0;
        while (r < n)
        {
            if (s[r] == 'W')
            {
                q.push(s[r]);
            }
            if (r - l + 1 == k)
            {
                if (!q.empty())
                {
                    int sz = q.size();
                    ans = min(ans, sz);
                    if (q.front() == s[l])
                    {
                        q.pop();
                    }
                    l++;
                    r++;
                }
                else
                {
                    ans = 0;
                    break;
                }
            }
            else
            {
                r++;
            }
        }
        cout << ans << nl;
    }

    return 0;
}