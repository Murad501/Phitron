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
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        int ans = -1;
        for (int i = 1; i <= n; i++)
        {
            if (i != v[i - 1])
            {
                if (ans == -1)
                {
                    ans = abs(i - v[i - 1]);
                }
                else
                {
                    ans = min(abs(i - v[i - 1]), ans);
                }
            }
        }
        cout << ans << nl;
    }
    return 0;
}