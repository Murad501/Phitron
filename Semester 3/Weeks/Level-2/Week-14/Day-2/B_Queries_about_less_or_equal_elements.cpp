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
// template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

// as a multiset
template <typename T>
using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
//

#define MuRAD_BOOST()                 \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

void solve()
{
    int n, m;
    cin >> n >> m;
    pbds<int> p;
    map<int, int> mp;
    vector<int> b;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mp[x]++;
        p.insert(x);
    }
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        b.push_back(x);
    }

    for (int i = 0; i < m; i++)
    {
        int x = b[i];
        int idx = p.order_of_key(x);
        cout << idx + mp[x] << " ";
    }
    cout << nl;
}

int main()
{
    MuRAD_BOOST();
    solve();

    return 0;
}