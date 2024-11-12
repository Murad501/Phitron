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
        int l = 0;
        int r = n - 1;
        int ans = n;
        while (l < r)
        {
            if (s[l] == s[r])
            {
                break;
            }
            ans -= 2;
            l++;
            r--;
        }
        cout << ans << nl;
    }

    return 0;
}