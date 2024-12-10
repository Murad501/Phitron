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
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> v;
    for (int i = 0; i <= m; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    vector<vector<int>> bits;
    for (int i = 0; i <= m; i++)
    {
        int count = 0;
        int maxBit = __lg(v[i]);
        int need = n - 1 - maxBit;
        vector<int> temp;
        for (int j = 0; j < need; j++)
        {
            temp.push_back(0);
        }

        for (int j = maxBit; j >= 0; j--)
        {
            temp.push_back(((v[i] >> j) & 1));
        }
        bits.push_back(temp);
    }

    vector<int> f = bits[m];
    int ans = 0;
    for (int i = 0; i < m; i++)
    {
        int count = 0;
        vector<int> opt = bits[i];
        for (int j = 0; j < n; j++)
        {
            if (opt[j] != f[j])
            {
                count++;
            }
        }
        if (count <= k)
        {
            ans++;
        }
    }
    cout << ans << nl;

    return 0;
}