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
    vector<int> v;
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        s.insert(x);
    }

    if (s.size() == 1)
    {
        minus;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (i == n - 2)
            {
                auto it = s.begin();
                if (v[i] == *it)
                {
                    it++;
                    cout << *it << " ";
                }
                else
                {
                    it++;
                    if (v[i + 1] == *it)
                    {

                        cout << *it << " ";
                        s.erase(it);
                    }
                    else
                    {
                        it--;
                        cout << *it << " ";
                        s.erase(it);
                    }
                }
            }
            else
            {
                auto it = s.begin();
                if (v[i] == *it && *it != *s.rbegin())
                {
                    it++;
                }
                cout << *it << " ";
                s.erase(it);
            }
        }
        cout << nl;
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