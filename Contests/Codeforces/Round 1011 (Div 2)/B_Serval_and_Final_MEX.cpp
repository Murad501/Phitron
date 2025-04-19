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
    int n;
    cin >> n;
    vector<int> v, ans;
    map<int, vector<int>> mp;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        mp[x].push_back(i);
    }
    if (mp[0].size() > 0)
    {
        int z = 0;
        for (int i = 0; i < 2; i++)
        {
             if(v[i] == 0){
                z++;
             }
        }

        if(z == mp[0].size()){
            cout<<2<<nl;
            cout<<1<<" "<<2<<nl;
            cout<<1<<" "<<n-1<<nl;
        }else if(z > 0){
            cout<<3<<nl;
            cout<<1<<" "<<2<<nl;
            cout<<2<<" "<<n-1<<nl;
            cout<<1<<" "<<2<<nl;
        }else{
            cout<<2<<nl;
            cout<<3<<" "<<n<<nl;
            cout<<1<<" "<<3<<nl;
        }
    }
    else
    {
        cout << 1 << nl;
        cout << 1 << " " << n << nl;
    }
}

int main()
{
    MuRAD_BOOST();
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}