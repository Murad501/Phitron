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

        string y = s;
        reverse(y.begin(), y.end());

        if (s <= y)
        {
            cout << s << nl;
        }
        else
        {
            cout << y << s << nl;
        }
    }
    return 0;
}