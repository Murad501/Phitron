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

        int count = 0;
        while (n > 1)
        {
            count += n / 2;

            if(n % 2 == 0){
                n = n/2;
            }else{
                n = n/2 + 1;
            }
        }
        if(count >= m){
            cout << "YES" << nl;
        }else{
            cout << "NO" << nl;
        }

    }
    return 0;
}