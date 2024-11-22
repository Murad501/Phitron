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
        int a, b, n;
        cin >> a >> b >> n;
        vector<int> tools;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            tools.push_back(x);
        }

        sort(tools.begin(), tools.end(), greater<int>());

        ll ans = b - 1;
        for (int i = 0; i < n; i++)
        {
            if (i == n - 1)
            {
                if (tools[i] >= a)
                {
                    ans += a;
                }
                else
                {
                    ans += tools[i] + 1;
                }
            }
            else
            {
                if (tools[i] >= a)
                {
                    ans += a - 1;
                }
                else
                {
                    ans += tools[i];
                }
            }
        }

        cout<<ans<< nl;
    }
    return 0;
}