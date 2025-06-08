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
    int n, x;
    cin >> n >> x;
    string s;
    int maxBit = __lg(x);
    for (int i = maxBit; i >= 0; i--)
    {
        if ((x >> i) & 1)
        {
            s.push_back('1');
        }
        else
        {
            s.push_back('0');
        }
    }

    if (n == 1)
    {
        cout << x << nl;
    }
    else
    {
        int firstZero = -1;
        int sz = s.size();
        s.reserve();
        for (int i = 0; i < sz; i++)
        {
            if (s[i] == '0')
            {
                firstZero = (1 << (i + 1));
                break;
            }
        }

        if (firstZero == -1)
        {
            firstZero = x + 1;
        }

        int available = n - 1;
        int curr = 0;
        for (int i = 0; i < n; i++)
        {
            
            if (curr == firstZero)
            {
                break;
            }
            cout << i << " ";
            curr++;
            available--;
        }
        
        // cout << x << " ";
        for (int i = 0; i < available; i++)
        {
             cout<<0<<" ";
        }
        cout << nl;
        // cout << firstZero << nl;
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