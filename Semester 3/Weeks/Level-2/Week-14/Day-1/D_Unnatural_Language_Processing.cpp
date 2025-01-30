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

bool isVowel(char c)
{
    return c == 'a' || c == 'e';
}

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<string> ans;
    while (n--)
    {
        string temp;
        while (true)
        {
            if (temp.size() == 0)
            {
                temp.push_back(s[n]);
            }
            else
            {
                if (isVowel(temp[temp.size() - 1]))
                {
                    temp.push_back(s[n]);

                    break;
                }
                else
                {
                    temp.push_back(s[n]);
                }
            }
            n--;
        }
        ans.push_back(temp);
    }
    int sz = ans.size();
    for (int i = sz - 1; i >= 0; i--)
    {
        string val = ans[i];
        reverse(val.begin(), val.end());
        cout << val;
        if (i != 0)
        {
            cout << ".";
        }
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