// 12/04/2025 18:39
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
    vector<string> actions;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        actions.push_back(s);
    }
    string current = "logout";
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (actions[i] == "login")
        {
            current = "login";
        }
        else if (actions[i] == "logout")
        {
            current = "logout";
        }
        else if (current == "logout" && actions[i] == "private")
        {
            cnt++;
        }
    }
    cout << cnt << nl;
}

int main()
{
    MuRAD_BOOST();
    solve();

    return 0;
}