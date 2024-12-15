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
        string s, t;
        cin >> s;
        t = s;
        int n = s.size();
        queue<int> zero, one;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
                zero.push(i);
            else
                one.push(i);
        }

        for (int i = 0; i < n; i++)
        {
            if (!one.empty() && !zero.empty())
            {
                int z = zero.front();
                int o = one.front();
                zero.pop();
                one.pop();
                swap(t[z], t[o]);
            }

            if (one.empty() || zero.empty())
            {
                break;
            }
        }
        int idx = -1;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == t[i])
            {
                idx = i;
                break;
            }
        }
        int ans = n - idx;
        if(idx == -1){
            ans = 0;
        }
        cout <<ans << nl;
    }
    return 0;
}