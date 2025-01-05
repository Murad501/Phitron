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
        int ans = 0;
        queue<int> q;
        int l = 0, r = 0, m = 0;

        while (r <= k)
        {
            if (s[r] == '1')
            {
                q.push('1');
            }
            r++;
        }
        if (q.empty())
        {
            ans++;
            s[m] = '1';
            q.push('1');
        }

        m = 1;
        while (m < n)
        {

            if (r < n && s[r] == '1')
            {
                q.push('1');
            }

            if (q.empty())
            {

                ans++;
                s[m] = '1';
                q.push('1');
            }
            if (m - l == k)
            {

                if (s[l] == '1')
                {
                    q.pop();
                }
            }
            if (m - l == k)
            {
                l++;
            }
            r++;
            m++;
        }

        cout << ans << nl;
    }
    return 0;
}