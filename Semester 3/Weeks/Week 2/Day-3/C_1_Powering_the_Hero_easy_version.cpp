#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        priority_queue<int> bonuses;
        ll ans = 0;
        while (n--)
        {
            int a;
            cin >> a;
            if (a > 0)
            {
                bonuses.push(a);
            }
            else
            {
                if (!bonuses.empty())
                {
                    int topVal = bonuses.top();
                    ans += topVal;
                    bonuses.pop();
                }
            }
        }
        cout << ans << nl;
    }

    return 0;
}