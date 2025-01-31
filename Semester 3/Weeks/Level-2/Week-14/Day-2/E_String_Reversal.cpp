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
// template <typename T>
// using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
//

#define MuRAD_BOOST()                 \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

void solve()
{
    int n;
    cin >> n;
    string s;
    cin>>s;
    string r = s;
    reverse(r.begin(), r.end());

    // cout<<s<<" "<<r<<nl;
    map<char, vector<int>>pos_s, pos_r;
    for (int i = 0; i < n; i++)
    {
         pos_s[s[i]].push_back(i);
         pos_r[r[i]].push_back(i);
    }

    // for(auto [key, values]:pos_s){
    //     cout<<key<<" -> ";
    //     for (auto val:values)
    //     {
    //          cout<<val<<" ";
    //     }
    //     cout<<nl;
    // }
    // cout<<nl;
    // for(auto [key, values]:pos_r){
    //     cout<<key<<" -> ";
    //     for (auto val:values)
    //     {
    //          cout<<val<<" ";
    //     }
    //     cout<<nl;
    // }

    vector<int>permutation(n);
    for (char ch = 'a'; ch <= 'z'; ch++)
    {
        for (int i = 0; i < pos_s[ch].size(); i++)
        {
             permutation[pos_r[ch][i]] = pos_s[ch][i];
        } 
    }

    pbds<int>p;
    ll ans = 0;
    for (int i = n -1; i >= 0; i--)
    {
         ans+=p.order_of_key(permutation[i]);
         p.insert(permutation[i]);
    }
    cout<<ans<<nl;


}

int main()
{
    MuRAD_BOOST();
    solve();

    return 0;
}