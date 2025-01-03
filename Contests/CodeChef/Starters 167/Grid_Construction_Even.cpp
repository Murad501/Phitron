#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define all(x) x.begin(), x.end()
#define ll long long int
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define cyes cout << "Yes" << '\n'
#define cno cout << "No" << '\n'
#define minus cout << -1 << '\n'
#define zero cout << 0 << '\n'

#define MuRAD_BOOST()                 \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

void solve()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int curr = i;
        for (int j = 1; j <= n; j++)
        {

            if (i % 2 == 1)
            {
                cout << curr << " ";
                if (curr == n)
                {
                    curr = 1;
                }
                else
                {
                    curr++;
                }
            }
            else
            {
                cout << curr << " ";
                if (curr == 1)
                {
                    curr = n;
                }
                else
                {
                    curr--;
                }
            }
        }
        cout << nl;
    }
}

int main()
{
    MuRAD_BOOST();
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}