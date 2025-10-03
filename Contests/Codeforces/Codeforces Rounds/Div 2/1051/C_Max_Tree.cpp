// 17/09/2025 21:38
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
    vector<pair<int, int>> pr;
    vector<char> temp;
    vector<int> numb;
    for (int i = 0; i < n; i++)
    {
        int u, v, x, y;
        cin >> u >> v >> x >> y;
        pr.push_back({x, y});
        if (x > y)
        {
            temp.push_back('b');
        }
        else
        {
            temp.push_back('c');
        }
    }

    int b = 0, c = 0;

    for (int i = n - 2; i >= 0; i--)
    {
        if (temp[i] == 'b')
        {
            b++;
            numb.push_back(b);
        }
        else
        {
            c++;
            numb.push_back(c);
        }
    }

    
    reverse(all(numb));

    for (int i = 0; i < n - 1; i++)
    {
        cout << temp[i] << " ";
        if(temp[i] == 'c'){

        }
    }
    cout << nl;
    for (int i = 0; i < n - 1; i++)
    {
        cout << numb[i] << " ";
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