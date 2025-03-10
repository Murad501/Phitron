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
    string a, b, c;
    cin >> a >> b >> c;
    int cnt_zero = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == '0')
        {
            cnt_zero++;
        }
        if (b[i] == '0')
        {
            cnt_zero++;
        }
        if (c[i] == '0')
        {
            cnt_zero++;
        }
    }

    if (cnt_zero == 0 || cnt_zero == n || cnt_zero == (n * 2) || cnt_zero == (n * 3))
    {
        int cnt_a_zero = 0, cnt_b_zero = 0, cnt_c_zero = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == '0')
            {
                cnt_a_zero++;
            }
            if (b[i] == '0')
            {
                cnt_b_zero++;
            }
            if (c[i] == '0')
            {
                cnt_c_zero++;
            }
        }

        if((cnt_a_zero == 0 || cnt_a_zero == n) && (cnt_b_zero == 0 || cnt__zero == n) && cnt_c_zero == 0){
            zero;
        }else{
            
        }
    }
    else
    {
        minus;
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