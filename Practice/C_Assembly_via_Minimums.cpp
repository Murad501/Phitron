#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >>t;
    while(t--)
    {
        long long n;
        cin >> n;
        float a = n * (n - 1) / 2;
        long long m = (long long)a;
        vector<long long> v(m);
        set<long long>s;

        vector<long long> ans;
        long long mx = LLONG_MIN;
        for (long long i = 0; i < m;i++)
        {
            cin >> v[i];
            if(v[i]>=mx)
            {
                mx = v[i];
            }
            s.insert(v[i]);
        }
        if(s.size()==1)
        {
            for (long long i = 0; i < n;i++)
            {
                cout << *s.begin()<< " ";
            }
            cout<<endl;
            continue;
        }
        map<long long, long long,greater<long long>> mp;
        multimap<long long, long long,greater<long long>> mp1;

        for (long long i = 0; i < m;i++)
        {
            mp[v[i]]++;
        }

        for(auto val:mp)
        {
            mp1.insert(pair<long long, long long>(val.second,val.first));
        }
       
        for(auto val:mp1)
        {
            ans.push_back(val.second);
        }

        // for(long long i:ans)
        // {
        //     cout << i << " ";
        // }
        long long from=ans.size();
        //cout << from << endl;
        for (long long i =from; i < n-1;i++)
        {
            ans.push_back(ans[0]);
        }
        if(s.size()==1)
        {
            ans.push_back(*s.begin());
        }
        else
        {
            ans.push_back(mx+1);
        }
        sort(ans.begin(), ans.end());
        map<long long,long long> mp2;
        for (long long i = 0; i < n;i++)
        {
            if(mp2[ans[i]]>mp[ans[i]])
            {
                ans[i] = ans[i + 1];
            }
            mp2[ans[i]]=mp2[ans[i]]+(n-i);
        }
        // vector<long long> ans1;
        long long cnt = 0;
        for (long long i = 0; i < n;i++)
        {
           
            cnt = cnt + n - i - 1;
            
            //cout << mp[ans[i]] << " " << cnt << endl;
            if(mp[ans[i]]<cnt)
            {
                ans[i] = ans[i - 1];
            }
            else{
                cnt = 0;
            }
          
        }
        ans[n - 1] = mx + 1;
        for (long long i = 0; i < n;i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}