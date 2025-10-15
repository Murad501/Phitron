// 10/10/2025 21:39
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
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mp[x]++;
    }
    vector<int> ods;
    vector<int> evens;
    int sum = 0;
    for (auto [key, value] : mp)
    {
        if (value & 1)
        {
            for (int i = 0; i < value - 1; i++)
            {
                evens.push_back(key);
            }
            ods.push_back(key);
            sum += (key * (value - 1));
        }
        else
        {
            for (int i = 0; i < value; i++)
            {
                evens.push_back(key);
            }
            sum += (key * value);
        }
    }

    if (ods.size() == 0)
    {
        cout << sum << nl;
    }
    else
    {

        sort(ods.rbegin(), ods.rend());
        if (ods.size() == 1)
        {
            if (sum <= ods[0])
            {
                if(evens.size() == 2){
                    zero;
                }else{
                    cout<<sum<<nl;
                }
            }
            else
            {
                sum += (ods[0]);
                cout << sum << nl;
            }
        }
        else
        {

            // cout<<"hello"<<nl;
            int m = ods.size();
            int mx = 0;
            for (int i = 0; i < m; i++)
            {

                int sm = ods[i];

                if(sm < sum){
                    mx = max(sm, mx);
                }
                int l = i + 1, r = m - 1, mid;
                while (l <= r)
                {
                    mid = (r + l) / 2;
                    if (sm - ods[mid] < sum)
                    {
                        r = mid - 1;
                        mx = max(mx, (sm + ods[mid]));
                    }
                    else
                    {
                        l = mid + 1;
                    }
                }
            
            }
            if(mx == 0 && evens.size() <=2){
                zero;
            }else{
                cout << sum + mx << nl;

            }
        }
    }
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