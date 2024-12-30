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
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());

    cin >> k;
    for (int i = 0; i < k; i++)
    {
        int k_l, k_r, l = 0, r = n - 1, mid;
        cin >> k_l >> k_r;
        int found_l = -1, found_r = -1;
        while (l <= r)
        {
            mid = (l + r) / 2;
            if (v[mid] >= k_l)
            {
                found_l = mid;
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        l = 0, r = n - 1;
        while (l <= r)
        {
            mid = (l + r) / 2;
            if (v[mid] <= k_r)
            {
                found_r = mid + 1;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }

        if (found_l == -1 || found_r == -1)
        {
            cout << 0 << " ";
        }
        else
        {
            cout << found_r - found_l << " ";
        }
    }
}

int main()
{
    MuRAD_BOOST();
    solve();

    return 0;
}