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
        int n;
        cin >> n;
        vector<int> b;
        for (int i = 0; i < n - 1; i++)
        {
            int x;
            cin >> x;
            b.push_back(x);
        }
        sort(b.begin(), b.end());

        vector<int> ans;
        ans.push_back(b[0] - 1);
        for (int i = 0; i < n - 1; i++)
        {
            ans.push_back(b[i] - ans[i]);
        }

        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << nl;
    }

    return 0;
}