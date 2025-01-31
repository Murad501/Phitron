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

// for pbds
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

// as a set
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

// as a multiset
// template <typename T> using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
//

#define MuRAD_BOOST()                 \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

void solve()
{
    int n, k;
    cin >> n >> k;
    pbds<pair<int, int>> p;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    int l = 0, r = 0;
    int mid = k / 2;
    if (k % 2 == 0)
    {
        mid--;
    }
    while (r < n)
    {
        p.insert({v[r], r});
        if (r - l + 1 == k)
        {
            pair<int, int> pr = *p.find_by_order(mid);
            cout << pr.first << " ";
            int val = v[l];
            p.erase({val, l});
            l++;
        }

        r++;
    }

    cout << nl;
}

int main()
{
    MuRAD_BOOST();
    solve();

    return 0;
}