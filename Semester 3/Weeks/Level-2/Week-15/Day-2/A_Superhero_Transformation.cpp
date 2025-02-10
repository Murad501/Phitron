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
    string a, b;
    cin >> a >> b;
    int n = a.size();
    int m = b.size();
    if (n != m)
    {
        cno;
        return;
    }
    int cnt_a = 0, cnt_b = 0;
    bool ok = true;
    for (int i = 0; i < n; i++)
    {
        bool ok_a = false, ok_b = false;
        if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')
        {
            cnt_a++;
            ok_a = true;
        }
        if (b[i] == 'a' || b[i] == 'e' || b[i] == 'i' || b[i] == 'o' || b[i] == 'u')
        {
            cnt_b++;
            ok_b = true;
        }
        if (ok_a != ok_b)
        {
            ok = false;
            break;
        }
    }
    if (cnt_a == cnt_b && ok)
    {
        cyes;
    }
    else
    {
        cno;
    }
}

int main()
{
    MuRAD_BOOST();
    solve();

    return 0;
}