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
        map<int, int> p;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            p[x]++;
        }
        int maxV = 0;
        for (auto [key, value] : p)
        {
            maxV = max(maxV, value);
        }
        cout << n - maxV << nl;
    }

    return 0;
}