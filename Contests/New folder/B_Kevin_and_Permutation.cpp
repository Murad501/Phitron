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
        int n, k;
        cin >> n >> k;
        int curr = 1;
        int back = n;
        for (int i = 1; i <= n; i++)
        {
            if (i % k == 0)
            {
                cout << curr << " ";
                curr++;
            }
            else
            {
                cout << back << " ";
                back--;
            }
        }
        cout<<nl;
    }
    return 0;
}