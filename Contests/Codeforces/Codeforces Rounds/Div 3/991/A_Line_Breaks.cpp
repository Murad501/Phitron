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
        vector<string> s;
        for (int i = 0; i < n; i++){
            string str;
            cin>>str;
            s.push_back(str);
        }
        int ans = 0;
        int count = 0;
        for (int i = 0; i < n; i++){
            string word = s[i];
            int sz = word.size();
            count+=sz;
            if(count > m){
                break;
            }
            ans++;
        }
        cout << ans << nl;
    }
    
    return 0;
}