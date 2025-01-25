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

int main()
{
    MuRAD_BOOST();
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(k), ans(k);

        for (int i = 0; i < k; i++)
        {
            cin >> v[i];
        }
        if (n == 1 || k == 1)
        {
            cyes;
            continue;
        }
        for (int i = 1; i < k; i++)
        {
            ans[i] = v[i] - v[i - 1];
        }

        bool flag = true;

        for (int i = 2; i < k; i++)
        {
            if (ans[i] < ans[i - 1])
            {
                flag = false;
                break;
            }
        }

        if (flag && (1LL * (n - k + 1) * ans[1]) >= v[0])
        {
            cyes;
        }
        else
        {
            cno;
        }
    }
    return 0;
}