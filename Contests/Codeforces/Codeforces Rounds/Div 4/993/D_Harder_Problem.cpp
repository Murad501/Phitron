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
        vector<int> v;
        map<int, int> mp;
        vector<int> ans;
        vector<int> temp;
        for (int i = 0; i <= n; i++)
        {
            temp.push_back(0);
        }

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
            temp[x] = 1;
            auto it = mp.find(x);
            if (it == mp.end())
            {
                ans.push_back(x);
            }
            mp[x]++;
        }

        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }

        for (int i = 1; i <= n; i++)
        {
            if (temp[i] == 0)
            {
                cout << i << " ";
            }
        }

        cout << nl;
    }
    return 0;
}