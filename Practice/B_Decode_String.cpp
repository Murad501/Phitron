#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    string decode;

    for (int i = 0; i < n;)
    {
        if (i + 2 < n && s[i + 2] == '0')
        {
            int dig = (((s[i] - '0') * 10) + (s[i + 1] - '0'));
            cout<<dig<<endl;
            decode += char(dig + char('a') - 1);
            i += 3;
        }
        else
        {
            int dig = s[i] - '0';
            decode += char(dig + char('a') - 1);
            i++;
        }
      
       
    }
    cout << decode << '\n';
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}