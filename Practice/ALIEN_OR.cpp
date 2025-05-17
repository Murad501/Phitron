                            /*in the name of almighty ALLAH*/
 
#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;

#define endl '\n'
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define MOD 1000000007 
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl


//***********************************START*******************************************//

void solve()
{
    ll n, k;
    cin >> n >> k;
    map < ll, ll > mp;
    for(int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        ll x = stoll(s, nullptr, 2);
        if(x == 0) continue;
        if(__builtin_popcount(x) == 1)
        {
            mp[x] = 1;
        }
    }

    
    ll pw = 1;
    while((1LL << k) > pw)
    {
        if(mp[pw] == 0)
        {
            no;
            return;
        }
        pw *= 2;
    }

    yes;
}

//***********************************END*********************************************//
int32_t main(){ fast
    
    int32_t t = 1, i;
      cin >> t;
    for(i = 1; i <= t; i++)
    {
       // cout << "Case " << i << ": ";
        solve();
    }
}