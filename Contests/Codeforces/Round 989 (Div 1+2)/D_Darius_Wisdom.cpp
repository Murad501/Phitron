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
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
            mp[x]++;
        }
        int count = 0;
        vector<pair<int, int>> ans;
        int l = 0, r = n - 1;
        while (l < r)
        {
            while (v[l] != 1 && l < r)
            {
                l++;
            }
            while (v[r] != 0 && l < r)
            {
                r--;
            }
            if (v[l] > v[r] && v[l] - v[r] == 1)
            {
                count++;
                ans.push_back({l, r});
                swap(v[l], v[r]);
            }
        }

        l = 0, r = n - 1;
        while (l < r)
        {
            while (v[l] != 2 && l < r)
            {
                l++;
            }
            while (v[r] != 1 && l < r)
            {
                r--;
            }
            if (v[l] > v[r] && v[l] - v[r] == 1)
            {
                count++;
                ans.push_back({l, r});
                swap(v[l], v[r]);
            }
        }
        l = 0, r = n - 1;
        while (l < r)
        {
            while (v[l] != 1 && l < r)
            {
                l++;
            }
            while (v[r] != 0 && l < r)
            {
                r--;
            }
            if (v[l] > v[r] && v[l] - v[r] == 1)
            {
                count++;
                ans.push_back({l, r});
                swap(v[l], v[r]);
            }
        }

        cout << count << nl;
        int sz = ans.size();
        for (int i = 0; i < sz; i++)
        {
            cout << ans[i].first + 1 << " " << ans[i].second + 1 << nl;
        }
    }
    return 0;
}