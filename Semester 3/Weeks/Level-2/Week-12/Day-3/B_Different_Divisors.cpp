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

const int maxN = 20030;
vector<int> primes;
vector<bool> isPrime(maxN, true);

void solve()
{
    int d;
    cin >> d;

    int first = *lower_bound(primes.begin(), primes.end(), 1 + d);
    int last = *lower_bound(primes.begin(), primes.end(), first + d);
    cout << first * last << endl;
}

int main()
{
    MuRAD_BOOST();
    for (int i = 2; i <= maxN; i++)
    {
        if (isPrime[i])
        {
            primes.push_back(i);
            for (int j = i + i; j <= maxN; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}