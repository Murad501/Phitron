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
    int  t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        vector<int> v;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());

        int ans = 0, l = 0, r = 0, count = 0, prev = v[0];
        while(r < n){
            if(prev != v[r]){
                l = r;
                prev = v[r];
            }
            while (prev == v[r])
            {
                r++;
                count++;
            }
         

            
        }
    }
    return 0;
}