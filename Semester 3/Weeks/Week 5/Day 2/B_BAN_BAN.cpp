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
        map<int, int> ans;
        string s;
        for (int i = 0; i < n; i++)
        {
            s.push_back('B');
            s.push_back('A');
            s.push_back('N');
        }

        int l = 0, r = (n * 3) - 1;
        while (l < r)
        {
            if (s[l] == 'B' && s[r] == 'N')
            {
                swap(s[l], s[r]);

                ans.insert({l + 1, r + 1});
            }
            l++;
            r--;
        }

        cout << ans.size() << nl;
        for (auto it : ans)
        {
            cout << it.first << " " << it.second << nl;
        }
    }
    return 0;
}