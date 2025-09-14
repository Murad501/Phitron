// 01/06/2025 23:06
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

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> cntA(32, 0), cntB(32, 0);
    vector<string> binaryA, binaryB;
    vector<int> minIdxs(n, 1), maxIdxs(n, 1);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        bitset<32> b(x);
        string s;
        for (int j = 31; j >= 0; j--)
        {
            if (b[j] == 1)
            {
                s.push_back('1');
                cntA[j]++;
            }
            else
            {
                s.push_back('0');
            }
        }
    }

    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        bitset<32> b(x);

        string s;
        for (int j = 31; j >= 0; j--)
        {
            if (b[j] == 1)
            {
                s.push_back('1');
                cntB[j]++;
            }
            else
            {
                s.push_back('0');
            }
        }
    }

    int mn = 0, mx = 0;
    for (int i = 0; i < 32; i++)
    {
       
        if (cntA[i] & 1)
        {
            if (n & 1)
            {
                mn += pow(2, i);
            }
        }
      
    }
    cout << nl;
    for (int i = 0; i < 32; i++)
    {
        cout << cntB[i] << " ";
    }
    cout << nl;
    cout << nl;
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