// 25/06/2025 21:26
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
    int n;
    cin >> n;
    vector<int> v;
    int on = 0, tw = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        if (x == 1)
        {
            on++;
        }
        else
        {
            tw++;
        }
    }

    if (n == 1)
    {
        yes;
        return;
    }
    if (abs(on - tw) > 2)
    {
        no;
        return;
    }

    vector<int> one, two, ones, twos;

    int l = 1;
    int cnt = 1;
    int curr = v[0];
    while (l < n)
    {
        while (v[l] == curr && l < n)
        {
            cnt++;
            l++;
        }
        if (cnt > 1)
        {
            if (curr == 1)
            {

                one.push_back(cnt);
                ones.push_back(l);
            }
            else
            {
                two.push_back(cnt);
                twos.push_back(l);
            }
            if (l < n)
            {
                curr = v[l];
            }
            cnt = 1;
        }
        else
        {
            curr = v[l];
        }
        l++;
    }

    int m = one.size(), p = two.size();
    if (!m && !p)
    {
        if (v[0] == v[n - 1])
        {
            yes;
        }
        else
        {
            no;
        }
    }
    else if (m && !p)
    {
        if (m > 1)
        {
            no;
        }
        else
        {
            if (one[0] > 3)
            {
                no;
            }
            else
            {

                if (one[0] == 3)
                {
                    if (ones[0] > 2 && v[0] == 1 || ones[0] == 2 && v[n - 1] == 1 || (ones[0] > 2 && v[ones[0]+1] == 2))
                    {
                        no;
                    }
                    else
                    {
                        yes;
                    }
                }
                else
                {
                    yes;
                }
            }
        }
    }
    else if (!m && p)
    {
        if (p > 1)
        {
            no;
        }
        else
        {
            if (two[0] > 3)
            {
                no;
            }
            else
            {

                if (two[0] == 3)
                {
                    if (twos[0] > 2 && v[0] == 2 || twos[0] == 2 && v[n - 1] == 2 || (twos[0] > 2 && v[twos[0]+1] == 1))
                    {
                        no;
                    }
                    else
                    {
                        yes;
                    }
                }
                else
                {
                    yes;
                }
            }
        }
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