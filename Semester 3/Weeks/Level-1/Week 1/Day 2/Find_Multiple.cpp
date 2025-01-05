#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c;
    cin >> a >> b >> c;

    int ans = -1;
    if(c*2 >= a && c*2 <= b){
        ans = c*2;
    }
    

    cout<<ans<<'\n';

    return 0;
}