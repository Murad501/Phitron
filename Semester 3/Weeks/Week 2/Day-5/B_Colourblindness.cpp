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
        string a, b;
        cin >> a >> b;
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if ((a[i] == 'R' && b[i] != 'R') || (b[i] == 'R' && a[i] != 'R'))
            {
                flag = false;
                break;
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