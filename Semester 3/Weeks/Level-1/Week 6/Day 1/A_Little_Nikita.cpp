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
        int n, m;
        cin >> n >> m;

        bool flag = true;
        if (n < m)
        {
            flag = false;
        }
        else
        {
            if (n % 2 == 0)
            {
                if (m % 2 != 0)
                {
                    flag = false;
                }
            }
            else
            {
                if (m % 2 != 1)
                {
                    flag = false;
                }
            }
        }
        if (flag){
            cout << "YES" << nl;
        }else{
            cout << "NO" << nl;
        }
    }
    return 0;
}