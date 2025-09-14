// 16/07/2025 20:52
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
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    sort(v.rbegin(), v.rend());

    // for (int i = 0; i < n; i++)
    // {
    //     cout << v[i] << " ";
    // }
    // cout << nl;
    vector<int> ans;

    for (int i = 1; i <= n + n; i++)
    {
        int available = i, sum = 0, x = 0;
        for (int j = 0; j < n; j++)
        {
            if (available > 0)
            {
                int val = v[j];
                // sum+=val;
                // available--;

                // int curr = i - n;
                // cout<<i<<" "<<curr<<nl;
                // if(curr >= 0){
                //     int start = n - curr - 1;
                //     if(start >= j){
                //         sum+=x;
                //         x++;
                //         available--;
                //     }
                // }

                // x++;
                int avail = n - j;

                // cout<<i<<" avail"<<" "<<avail<<" "<<j<<" "<<sum<<nl;
                if ((i - n) >= avail && available > 1)
                {
                    sum += val;
                    sum += x;
                    x++;
                    available -= 2;
                }
                else
                {

                    if (x > v[j + 1] && j <= n - 2 && available > 1 && i <= n)
                    {
                        sum += (val + x);
                        x++;
                        available -= 2;
                    }
                    else
                    {
                        sum += val;
                        x++;
                        available--;
                    }
                }

                // if (j == (n - 1))
                // {

                //     cout<<x<<" "<<nl;
                //     if (available > 1)
                //     {
                //         sum += (val + x);
                //     }
                //     else
                //     {
                //         sum += val;
                //     }
                // }
                // else if (available >= (avail * 2))
                // {
                //     // cout << i << "avail" << avail << nl;
                //     sum += val;
                //     sum += x;
                //     available -= 2;
                //     x++;
                // }
                // else
                // {

                // }

                // if(i > n){

                // }
            }
            else
            {
                break;
            }
        }
        ans.push_back(sum);
    }

    for (int i = 0; i < n + n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << nl;
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