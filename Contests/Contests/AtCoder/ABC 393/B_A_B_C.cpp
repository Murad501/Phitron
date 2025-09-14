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
    string s;
    cin >> s;

    int n = s.size();
    int ans = 0;
    int curr = 1;
    int len = n / 2;
    if (n % 2 == 0)
    {
        len--;
    }
    while (len--)
    {
        int i = 1, j = curr + 1, k = j + curr;
        while (k <= n)
        {

            if (s[i - 1] == 'A' && s[j - 1] == 'B' && s[k - 1] == 'C')
            {
                ans++;
            }
            i++;
            j++;
            k++;
        }
        curr++;
    }
    cout << ans << nl;
}

int main()
{
    MuRAD_BOOST();
    solve();

    return 0;
}