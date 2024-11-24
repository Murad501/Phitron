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
    while (t--){
        int a, b;
        cin >> a >> b;
        int ans = a ^ b;
        cout<<ans<<nl;
    }
    return 0;
}