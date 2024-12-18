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

        int sum = 0;
        for (int i = 1; i <= n; i++)
        {
            bool flag = true;
            for (int j = 1; j <= m; j++)
            {
                int temp = 2 * (i + j);
                sum = max(sum, temp);
                if (temp >= k)
                {
                    flag = false;
                    break;
                }
            }
            if (!flag)
            {
                break;
            }
        }
        int ans = 0;
        if (sum < k)
        {
            ans = k - sum;
        }
        else if (sum > k)
        {
            ans = sum - k;
        }
        cout << ans << nl;
    }

    return 0;
}