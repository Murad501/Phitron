#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define pb push_back
#define ppb pop_back
#define pf push_front
const int MOD = 1e9 + 7;
/*=======Mysha=======*/

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string a,b;
        cin>>a>>b;
        int p1=0,p2=0;
        for (int i = 0; i < n; i++)
        {
            if(a[i]==b[i])
                continue;
            else
            {
                if(a[i]=='R' && b[i]=='S')
                    p1++;
                else if(a[i]=='S' && b[i]=='R')
                    p2++;
                if(a[i]=='S' && b[i]=='P')
                    p1++;
                else if(a[i]=='P' && b[i]=='S')
                    p2++;
                if(a[i]=='P' && b[i]=='R')
                    p1++;
                else if(a[i]=='R' && b[i]=='P')
                    p2++;
            
            }
            
        }
        if(p1>p2)
            cout<<0<<endl;
        else if(p1==p2)
            cout<<1<<endl;
        else 
            cout<<p2-p1<<endl;
        
        
    }


    return 0;
}