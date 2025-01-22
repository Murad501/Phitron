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
    int n, a, b;
    cin >> n >> a >> b;
    int half = n / 2;
    int cnt = 0, current = n;
    vector<int> v;
    while (cnt < half - 1)
    {
        if (current != a && current != b)
        {
            v.push_back(current);
            cnt++;
        }
        current--;
    }
    v.push_back(a);
    v.push_back(b);
    current = 1, cnt = 0;
    while (cnt < half - 1)
    {
        if (current != a && current != b)
        {
            v.push_back(current);
            cnt++;
        }
        current++;
    }

    bool flag = true;
    for (int i = 0; i < n / 2; i++)
    {
        if (v[i] < a)
        {
            flag = false;
            break;
        }
    }
    if (flag)
    {
        for (int i = n/2; i < n; i++)
        {
            if (v[i] > b)
            {
                flag = false;
                break;
            }
        }
    }
    if(flag){
        for(auto x: v){
            cout << x << " ";
        }
        cout << nl;
    }else{
        minus;
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