// 31/05/2025 21:15
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

    vector<int> primes;
    vector<bool> isPrimes(5002, true);
    primes.push_back(2);
    for (int i = 2; i <= 5000; i++)
    {
        if (i % 2 == 0)
        {
            continue;
        }
        if (isPrimes[i])
        {
            primes.push_back(i);

            for (int j = i + i; j <= 5000; j += i)
            {
                isPrimes[j] = false;
            }
        }
    }

    int sz = primes.size();

    map<int, vector<int>> mp;
    int minGcd;
    int minValIdx = -1;
    int minVal = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if(x < minVal){
            minValIdx = i;
            minVal = x;
        }
        if (i == 0)
        {
            minGcd = x;
        }
        else
        {
            minGcd = __gcd(minGcd, x);
        }

        int idx = 0;
        int val = x;
        while (val > 1)
        {
            while (val % primes[idx] == 0)
            {
                mp[i + 1].push_back(primes[idx]);
                val /= primes[idx];
            }
            idx++;
            if (idx == sz)
            {
                break;
            }
        }
        if (isPrimes[val] && val > 1)
        {
            mp[i + 1].push_back(primes[idx]);
        }
    }

    // int ans = 0;
    // int mnVal = minVal;
    // while (true)
    // {

    //     for (int i = 0; i < n; i++)
    //     {
             
    //     }
    // }
    

    // cout<<minGcd<<nl;
    for(auto[key, value]:mp){
        cout<<key<<"-> ";
        for(auto val:value){
            cout<<val<<" ";
        }
        cout<<nl;
    }
    cout<<nl;


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