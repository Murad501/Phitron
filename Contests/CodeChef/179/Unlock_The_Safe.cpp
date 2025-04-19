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
    vector<int> a, b;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        b.push_back(x);
    }

    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
         if(a[i] != b[i]){
            int mv_one = abs(a[i] - b[i]);
            int mv_two = min(a[i], b[i]) + (9 - max(a[i], b[i]));
            cnt += min(mv_one, mv_two); 
         }
    }
    if(k >= cnt){
        int available = k - cnt;
        cout<<available << endl;
        if(available % 2 == 1 && cnt % 2 == 1){
            yes;
        }else{
            no;
        }
    }else{
        no;
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