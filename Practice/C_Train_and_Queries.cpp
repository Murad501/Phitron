#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin>>t;
    while(t--)
    {
        long long n, k;
        cin >> n >> k;

        vector<long long> v(n);
        for (long long i = 0; i < n;i++)
        {
            cin >> v[i];
        }
        vector<set<long long>> dp(n);

        set<long long> s;
        for (long long i = n-1; i >= 0;i--)
        {
            s.insert(v[i]);
            dp[i] = s;
        }
        
        map<long long, set<long long>> mp;

        for (long long i = 1;i<n;i++)
        {
            if(mp[v[i-1]].empty()==true)
            {
                mp[v[i-1]] = dp[i];
            }
            
        }
        // for (long long i = 0; i < n;i++)
        // {
        //     cout << v[i] << " -> ";
        //     for(auto val: mp[v[i]])
        //     {
        //         cout << val << " ";
        //     }
        //     cout << endl;
        // }

        while(k--)
        {
            long long a, b;
            cin >> a >> b;

            if(mp[a].find(b)!=mp[a].end())
            {
                cout << "YES" << endl;

            }
            else{
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}