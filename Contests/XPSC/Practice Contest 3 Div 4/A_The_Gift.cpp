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
    int x, n, m;
    cin >> x >> n >> m;
    if(x+m >= n){
        cout<<"YES"<<nl;
    }else{
        cout<<"NO"<<nl;
    }
    return 0;
}