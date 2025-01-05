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
    int n, k;
    cin >> n >> k;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    for (int i = 0; i < k; i++)
    {
        int key, l = 0, r = n - 1, mid;
        cin >> key;
        bool found = false;
        while (l <= r)
        {
            mid = (l + r) / 2;
            if (key == v[mid])
            {
                found = true;
                break;
            }
            else if (key < v[mid])
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        if (found)
        {
            yes;
        }
        else
        {
            no;
        }
    }
}

int main()
{
    MuRAD_BOOST();
    solve();

    return 0;
}