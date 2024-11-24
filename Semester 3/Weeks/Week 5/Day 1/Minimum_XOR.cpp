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
        int n;
        cin >> n;
        vector<int> a;
        int XOR = 0;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            a.push_back(x);
            XOR ^= x;
        }
        int ans = XOR;
        for (int i = 0; i < n; i++)
        {
            int minimize =  a[i] ^ XOR;
            ans = min(ans, minimize);
        }
        
        cout<<ans<<nl;
    }
    return 0;
}