#include<bits/stdc++.h>
using namespace std;
int main()
{ 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int>v(n);
        int x=0;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            x+=v[i];
        }
        if(k>x)
        {
            cout<<"-1"<<endl;
            continue;
        }
        int l=0,r=0;
        int maxsum=0;
        int maxlength=0;
        while(r<n)
        {
            maxsum+=v[r];
            if(maxsum==k)
            {
                maxlength=max(maxlength,r-l+1);
            }
            else
            {
                while(maxsum>k)
                {
                    maxsum-=v[l];
                    l++;
                }
            }
            r++;
        }
        cout<<n-maxlength<<endl;
    }
    return 0;
}