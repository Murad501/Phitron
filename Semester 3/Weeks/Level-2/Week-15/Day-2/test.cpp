#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define all(x) x.begin(), x.end()
#define ll long long int
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define cyes cout << "Yes" << '\n'
#define cno cout << "No" << '\n'
#define minus cout << -1 << '\n'
#define zero cout << 0 << '\n'

#define MuRAD_BOOST()                 \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);


void print(int n){
    if(n == 0)return;
    cout<<n<<" ";
    print(n-1);
    print(n-1);
}
void solve()
{
    int n;
    cin>>n;
    print(n);
}

int main()
{
    MuRAD_BOOST();
    solve();

    return 0;
}