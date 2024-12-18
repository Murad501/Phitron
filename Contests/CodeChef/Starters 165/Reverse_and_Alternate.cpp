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
        string s;
        cin >> s;
        bool flag = true;

        int zero = 0, one = 0;
        vector<pair<int, int>> zeros, ones;

        for (int i = 0; i < n-1; i++)
        {
            if (s[i] == '0' && s[i + 1] == '0')
            {
                zero++;
                zeros.push_back({i, i+1});
            }
            else if (s[i] == '1' && s[i + 1] == '1')
            {
                one++;
                ones.push_back({i, i+1});
            }
            }

        if (zero > 1 || one > 1)
        {
            flag = false;
        }
        else if (zero == 1 && one == 0)
        {
            pair<int, int> zr = zeros[0];
            int zf = zr.first;
            int zs = zr.second;

            if ((zf == 1 && s[0] == '1') || (zs == n - 2 && s[n - 1] == '1'))
            {
                flag = true;
            }
            else
            {
                flag = false;
            }
        }
        else if (one == 1 && zero == 0)
        {
            pair<int, int> ons = ones[0];
            int of = ons.first;
            int os = ons.second;
            if ((of == 1 && s[0] == '0') || (os == n - 2 && s[n - 1] == '0'))
            {
                flag = true;
            }
            else
            {
                flag = false;
            }
        }

        if (flag)
        {
            cout << "Yes" << nl;
        }
        else
        {
            cout << "No" << nl;
        }
    }

    return 0;
}