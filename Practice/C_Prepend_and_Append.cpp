#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;

        cin >> s;
        int ans = n;

        for (int i = 0, j = n - 1; i < n; i++, j--)
        {
            if (i > j)
            {
                break;
            }
            if (s[i] != s[j])
            {
                ans -= 2;
            }
            if (s[i] == s[j])
            {
                break;
            }
        }

        cout << ans << '\n';
    }
}