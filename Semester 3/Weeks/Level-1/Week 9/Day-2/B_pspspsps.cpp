#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define all(x) x.begin(), x.end()
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
        string str;
        cin >> str;
        int s = count(all(str), 's');
        int p = count(all(str), 'p');

        bool flag = false;
        if (!s or !p)
        {
            flag = true;
        }
        else if (s == 1 && p == 1)
        {
            if (str.find('s') == 0 or str.find('p') == n - 1)
            {
                flag = true;
            }
        }
        else if (s == 1)
        {
            int idx = str.find('s');
            if (idx == 0)
            {
                flag = true;
            }
        }
        else if (p == 1)
        {
            int idx = str.find('p');
            if (idx == n - 1)
            {
                flag = true;
            }
        }
        cout << (flag ? "YES" : "NO") << nl;
    }

    return 0;
}