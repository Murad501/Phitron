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
    int arr[n][n - 1];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            cin >> arr[i][j];
        }
    }

    vector<int> ans;
    set<int> s;

    for (int j = 0; j < n - 1; j++)
    {
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int x = arr[i][j];
            mp[x]++;
        }
        int first_item = mp.begin()->first;
        int first_times = mp.begin()->second;
        int second_item = mp.rbegin()->first;
        int second_times = mp.rbegin()->second;
        if (first_times > second_times)
        {

            if (s.find(first_item) == s.end())
            {
                ans.push_back(first_item);
                s.insert(first_item);
            }
            if (s.find(second_item) == s.end())
            {
                ans.push_back(second_item);
                s.insert(second_item);
            }
            mp.erase(first_item);
            mp.erase(second_item);
        }
        else
        {
            if (s.find(second_item) == s.end())
            {
                ans.push_back(second_item);
                s.insert(second_item);
            }
            if (s.find(first_item) == s.end())
            {
                ans.push_back(first_item);
                s.insert(first_item);
            }
            mp.erase(first_item);
            mp.erase(second_item);
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << nl;
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