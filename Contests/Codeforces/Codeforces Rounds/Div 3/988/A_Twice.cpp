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
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            v.push_back(a);
        }

        sort(v.begin(), v.end());

        int ans = 0;
        int j = 0;
        while (j < n - 1)
        {
            if (v[j] == v[j + 1])
            {
                j += 2;
                ans++;
            }
            else
            {

                j++;
            }
        }
        cout << ans << nl;
    }
    return 0;
}