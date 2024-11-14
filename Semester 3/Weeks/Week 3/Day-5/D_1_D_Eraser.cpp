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
        int count = 0;

        int l = 0, r = 0, ans = 0;
        while (r < n)
        {
            if (s[r] == 'B')
            {
                count++;
            }
            if (r - l + 1 == k)
            {
                if (s[l] == 'B')
                {
                    ans++;
                    l += k;
                    count = 0;
                }
                else
                {
                    l++;
                }
            }

            r++;

            if (r == n && count > 0)
            {
                ans++;
                count = 0;
            }
        }
        cout << ans << nl;
    }

    return 0;
}