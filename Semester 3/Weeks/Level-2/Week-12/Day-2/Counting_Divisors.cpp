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

const int maxN = 1e6 + 9;
vector<int> divisors(maxN);

void solve()
{
    int n;
    cin >> n;

    cout << divisors[n] << nl;
}

int main()
{
    MuRAD_BOOST();

    for (int i = 1; i < maxN; i++)
    {
        for (int j = i; j < maxN; j += i)
        {
            divisors[j]++;
        }
    }

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}