// 10/10/2025 20:43
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
    int x, y, z;
    cin >> x >> y >> z;
    string aa, bb, cc;
    bitset<32> a(x);
    bitset<32> b(y);
    bitset<32> c(z);
    for (int i = 0; i < 32; i++)
    {
        if (a.test(i))
        {
            aa.push_back('1');
        }
        else
        {
            aa.push_back('0');
        }

        if (b.test(i))
        {
            bb.push_back('1');
        }
        else
        {
            bb.push_back('0');
        }

        if (c.test(i))
        {
            cc.push_back('1');
        }
        else
        {
            cc.push_back('0');
        }
    }

    string ansA = aa, ansB = bb, ansC = cc;
    for (int i = 0; i < 32; i++)
    {
        if (aa[i] == '1')
        {
            ansB[i] = '1';
        }
        if (bb[i] == '1')
        {
            ansC[i] = '1';
        }
        if (cc[i] == '1')
        {
            ansA[i] = '1';
        }
    }
    // cout<<ansA.size()<<" "<<ansB.size()<<" "<<ansC.size()<<nl;
    // cout<<aa<<nl;
    // cout<<bb<<nl;
    // cout<<cc<<nl;

    int cntA = 0, cntB = 0, cntC = 0;

    for (int i = 0; i < 32; i++)
    {
        if (ansA[i] == '1')
        {
            cntA += (pow(2, i));
        }
        if (ansB[i] == '1')
        {
            cntB += (pow(2, i));
        }
        if (ansC[i] == '1')
        {
            cntC += (pow(2, i));
        }
    }
    int val = cntA & cntB;
    int val2 = cntB & cntC;
    int val3 = cntA & cntC;


    if (val == x && val2 == y && val3 == z)
    {
        yes;
    }
    else
    {
        no;
    }

    // for (int i = 0; i < 32; i++)
    // {
    //      if(a.test(i)){
    //         tb.
    //      }
    // }
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