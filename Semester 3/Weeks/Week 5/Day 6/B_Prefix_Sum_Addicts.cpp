#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define ll long long int

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
        vector<int> v;
        for (int i = 0; i < k; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        deque<ll> ans;
        for (int i = k - 1; i >= 1; i--)
        {

            ans.push_front(v[i] - v[i - 1]);
        }

        bool flag = true;
        for (int i = 0; i < k; i++)
        {
            if (ans[i] > ans[i + 1])
            {
                flag = false;
                break;
            }
        }
        if (!flag)
        {
            cout << "NO" << nl;
        }
        else
        {

            int sum = v[0];
            int remaining = n - k + 1;

            if (sum <= remaining)
            {
                cout << "YES" << nl;
            }
            else
            {
                cout << "NO" << nl;
            }
        }
    }

    return 0;
}