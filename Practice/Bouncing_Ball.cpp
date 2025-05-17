#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,c=0,l=0,r=0,k;
        cin>>n;
        deque<int>d(n);
        for(int i=0;i<n;i++){
            cin>>d[i];
        }

        k=d.size();
        if(k==0){
            cout<<"0\n";
            continue;
        }
        vector<int>v(k);
        v[0]=d.front();
        for(int i=1;i<k;i++){
            v[i]=v[i-1]+d[i];
        }

        for(int i=0;i<k;i++){
           if(d[i]==0){
               int w= v[k-1]- v[i];
               int z= abs(v[i] -w);
               if(z==1)c+=1;
               else if(z==0)c+=2;
           }
        }
        cout<<c<<endl;
    }
    return 0;
}