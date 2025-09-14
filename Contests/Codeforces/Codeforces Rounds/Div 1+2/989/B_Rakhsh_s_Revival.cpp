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
        int n, m, k;
        cin >> n >> m >> k;
        string s;
        cin >> s;

        int ans = 0;
        int count = 0;
        int i = 0;
        while (i < n)
        {
            if (s[i] == '0')
            {
                count++;
            }
            else
            {
                count = 0;
            }

            if (count == m)
            {
                ans++;
                count = 0;
                i += k;
            }
            else
            {
                i++;
            }
        }
        cout << ans << nl;
    }
    return 0;
}