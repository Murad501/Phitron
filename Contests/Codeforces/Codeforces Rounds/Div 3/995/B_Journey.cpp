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
        ll n, a, b, c;
        cin >> n >> a >> b >> c;

        ll days = 0, sum = 0, total = a + b + c;
        ll minDays = n / total;

        days += (minDays * 3);
        sum += (minDays * total);

        if (sum < n)
        {
            sum += a;
            days++;
        }
        if (sum < n)
        {
            sum += b;
            days++;
        }
        if (sum < n)
        {
            sum += c;
            days++;
        }

        cout << days << nl;
    }

    return 0;
}