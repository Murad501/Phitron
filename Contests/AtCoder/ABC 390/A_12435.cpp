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

    vector<int> v;
    for (int i = 0; i < 5; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    int cnt = 0;
    bool ok = true;
    for (int i = 0; i < 5; i++)
    {
        if (v[i] != i + 1)
        {
            if (abs(v[i] - (i + 1)) == 1)
            {
                cnt++;
            }
            else
            {
                ok = false;
                break;
            }
        }
    }
    if (cnt == 2)
    {
        if (ok)
        {
            cyes;
        }
        else
        {
            cno;
        }
    }
    else
    {
        cno;
    }
}

int main()
{
    MuRAD_BOOST();
    solve();

    return 0;
}