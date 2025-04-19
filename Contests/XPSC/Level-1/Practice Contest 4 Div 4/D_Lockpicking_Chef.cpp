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
        int n, m;
        cin >> n >> m;
        string s;
        cin >> s;
        string k;
        cin >> k;

        int ans = INT_MAX;

        for (int i = 0; i <= n - m; i++)
        {

            int temp = 0;
            for (int j = 0; j < m; j++)
            {
                int l = i + j;
                int temp1 = abs(s[l] - k[j]);

                int minV = min(s[l], k[j]);
                int maxV = max(s[l], k[j]);

                int temp2 = minV + 10 - maxV;

                temp += min(temp1, temp2);
            }
            ans = min(ans, temp);
        }

        cout << ans << nl;
    }
    return 0;
}