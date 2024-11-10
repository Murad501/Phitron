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
        set<int> uniques;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x != 0)
            {

                uniques.insert(x);
            }
        }
        if (uniques.empty() || uniques.size() == 1)
        {
            cout << "YES" << nl;
        }
        else
        {
            cout << "NO" << nl;
        }
    }

    return 0;
}