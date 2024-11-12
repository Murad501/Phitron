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
        int n, k, l;
        cin >> n >> k >> l;

        vector<int> songs;
        for (int i = 1; i <= n; i++)
        {
            int m, ln;
            cin >> m >> ln;
            if (ln == l)
            {
                songs.push_back(m);
            }
        }

        if (songs.empty())
        {
            cout << "-1" << nl;
        }
        else
        {
            int ans = 0;

            sort(songs.begin(), songs.end(), greater<int>());
            int sz = songs.size();
            if (sz < k)
            {
                cout << "-1" << nl;
            }
            else
            {
                for (int i = 0; i < k; i++)
                {
                    ans += songs[i];
                }
                cout << ans << nl;
            }
        }
    }

    return 0;
}