// 05/05/2025 21:00
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
    int n, k, sum = 0;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<int> v;
    vector<int>zeros;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        sum += x;
        v.push_back(x);
        if(s[i] == '0'){
            zeros.push_back(i);
        }
    }

    int maxSum = v[0];
    int currentSum = v[0];

    for (int i = 1; i < n; i++)
    {
        currentSum = max(v[i], currentSum + v[i]);
        maxSum = max(maxSum, currentSum);
    }

        int need = k - maxSum;
        bool ok = false;
        cyes;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0' && !ok)
            {
                cout << need << " ";
                ok = true;
            }
            else
            {
                cout << v[i] << " ";
            }
        }
        cout << nl;
    
};

int32_t main()
{
    MuRAD_BOOST();
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}