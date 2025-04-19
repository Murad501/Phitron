#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
    int n;
    cin>>n;
   stack<long long>pq,pq1;
   for(int i =0;i<n;i++){
    long long x;
    cin>>x;
    pq.push(x);
   } 
   pq1.push(pq.top());
   pq.pop();
   while(!pq.empty()){
    long long a = pq.top();
    if(pq1.empty()){
        pq1.push(pq.top());
        pq.pop();
    }
    else if(a == pq1.top()){
        pq1.push(pq.top());
        pq.pop();
        //pq1.pop();
    }
    else{
        pq.pop();
        pq1.pop();
    }
   }
   cout<<pq1.size()<<endl;
}
return 0;
}