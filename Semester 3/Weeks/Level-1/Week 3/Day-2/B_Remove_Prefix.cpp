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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a[i] = x;
        }

        set<int> uniques;
        int idx = n - 1;
        for (int i = n - 1; i >= 0; i--)
        {
            int val = a[i];
            auto it = uniques.find(val);
            if (it == uniques.end())
            {
                idx = i;
                uniques.insert(val);
            }
            else
            {
                break;
            }
        }
        cout << idx << nl;
    }

    return 0;
}