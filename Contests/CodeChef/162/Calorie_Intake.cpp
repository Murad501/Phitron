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
    int x, y, z;
    cin >> x >> y >> z;
    int all = y*z;
    if(all <= x){
        cout<<x-all<<nl;
    }else{
        cout<<-1<<nl;
    }
    return 0;
}