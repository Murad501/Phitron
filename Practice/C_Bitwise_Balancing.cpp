// 16/05/2025 19:03
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define int long long
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

string makeBinary(int x, int mx)
{
    int mxBit = __lg(x);
    string s;
    for (int i = 0; i <= mxBit; i++)
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
    for (int i = mxBit; i < mx; i++)
    {
        s.push_back('0');
    }
    return s;
}

void solve()
{
    int b, c, d;
    cin >> b >> c >> d;
    int mxB = b ? __lg(b) : 0;
    int mxC = c ? __lg(c) : 0;
    int mxD = d ? __lg(d) : 0;

    int mx = max({mxB, mxC, mxD});
    string B = makeBinary(b, mx), C = makeBinary(c, mx), D = makeBinary(d, mx);
    bool ok = true;
    string a = string(mx + 1, '0');

    for (int i = 0; i <= mx; i++)
    {
        if (D[i] == '1')
        {
            if (B[i] == '0' && C[i] == '1')
            {
                ok = false;
                break;
            }
            else
            {

                if (B[i] == '0' && C[i] == '0')
                {
                    a[i] = '1';
                }
                else
                {
                    a[i] = '0';
                }
            }
        }
        else
        {
            if (B[i] == '1' && C[i] == '0')
            {
                ok = false;
                break;
            }
            else
            {
                if (B[i] == '1' && C[i] == '1')
                {
                    a[i] = '1';
                }
                else
                {
                    a[i] = '0';
                }
            }
        }
    }

    if (!ok)
    {
        minus;
    }
    else
    {
        reverse(a.begin(), a.end());

        cout << stoll(a, nullptr, 2) << nl;
    }
}

int32_t main()
{
    MuRAD_BOOST();
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}