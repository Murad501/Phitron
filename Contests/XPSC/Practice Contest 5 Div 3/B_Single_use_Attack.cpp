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
        int x, y, h;
        cin >> h >> x >> y;

        int count = 0;
        bool flag = false;
        while (h > 0)
        {
            if(!flag){
                h-=y;
                count++;
                flag = true;
                continue;
            }
            h-=x;
            count++;

        }
        cout<<count<<nl;
        
    }
    return 0;
}